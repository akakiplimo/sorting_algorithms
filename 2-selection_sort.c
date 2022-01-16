#include "sort.h"

/**
* selection_sort - function that sorts an array of integers
* in ascending order using the Selection sort algorithm
* @array: array to be sorted
* @size: size of the array to be sorted
* Return: nothing
*/
void selection_sort(int *array, size_t size)
{
size_t i, j;
int min, temp, index;

for (i = 0; i < size; i++)
{
min = array[i];
for (j = i + 1; j < size; j++)
{
if (min > array[j])
{
min = array[j];
index = j;
}
}
if (min != array[i])
{
temp = array[i];
array[i] = min;
array[index] = temp;
print_array(array, size);
}
}
}
