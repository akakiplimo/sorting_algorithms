#include "sort.h"


/**
* bubble_sort -  sorts an array of integers in ascending order
* using the Bubble sort algorithm
* @array: array to be sorted
* @size: size of the array to be sorted
*
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
size_t i, n, next;
int swap;

if (array == NULL || size < 2)
return;

n = size;
while (n > 0)
{
next = 0;
for (i = 0; i < n - 1; i++)
{
if (array[i] > array[i + 1])
{
swap = array[i];
array[i] = array[i + 1];
array[i + 1] = swap;
next = i + 1;
print_array(array, size);
}
}
n = next;
}
}
