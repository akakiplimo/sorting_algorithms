#include "sort.h"


/**
* quick_sort - function that sorts an array of integers
* in ascending order using the Quick sort algorithm
* @array: array to be sorted
* @size: size of array
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size <= 1)
return;
sort_alg(array, 0, size - 1, size);
}

/**
* sort_alg - recursive sorting algorithm
* @arr: array
* @left: leftmost index
* @right: rightmost index
* @size: size of array
*/
void sort_alg(int *arr, int left, int right, size_t size)
{
int pivot;

if (left < right)
{
pivot = partition(arr, left, right, size);
sort_alg(arr, left, pivot - 1, size);
sort_alg(arr, pivot + 1, right, size);
}
}

/**
* partition - partitioning array
* @arr: array
* @left: leftmost index
* @right: rightmost index
* @size: size of array
* Return: pivot index
*/
int partition(int *arr, int left, int right, size_t size)
{
int i, j, pivot, temp;

pivot = arr[right];
i = left;

for (j = left; j < right; j++)
{
if (arr[j] < pivot)
{
if (i != j)
{
temp = arr[j];
arr[j] = arr[i];
arr[i] = temp;
print_array(arr, size);
}
i++;
}
}
if (arr[i] != arr[right])
{
temp = arr[i];
arr[i] = arr[right];
arr[right] = temp;
print_array(arr, size);
}

return (i);
}
