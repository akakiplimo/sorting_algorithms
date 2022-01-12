#include "sort.h"


/**
* insertion_sort_list - sorts a doubly linked list of integers in
* ascending order using the Insertion sort algorithm
* @list: list of numbers to be sorted
*
* Return: nothing
*/
void insertion_sort_list(listint_t **list)
{
listint_t *fwd, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

for (fwd = (*list)->next; fwd && fwd->prev; fwd = fwd->next)
{
for (; fwd && fwd->prev && fwd->n < fwd->prev->n; fwd = fwd->prev)
{
temp = fwd->prev;
swap(list, temp, fwd);
print_list(*list);
fwd = fwd->next;
}
}
}

/**
* swap - swaps two nodes
* @head: head node
* @node1: first node
* @node2: second node
*
* Return: void
*/
void swap(listint_t **head, listint_t *node1, listint_t *node2)
{
listint_t *prev, *next;

prev = node1->prev;
next = node2->next;

if (prev != NULL)
prev->next = node2;
else
*head = node2;

node1->prev = node2;
node1->next = next;
node2->prev = prev;
node2->next = node1;
if (next)
next->prev = node1;
}
