#include "sort.h"
/**
 * swap - swap two elements
 * @a: parameter
 * @b: parameter
 */
void swap(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}

/**
 * partition - take last element
 * @arr: parameter
 * @right: parameter
 * @left: parameter
 * @size: parameter
 * Return: b + 1
 */
int partition(int arr[], int left, int right, size_t size)
{
int a = arr[right];
int b = (left - 1);
int c = left;
while (c < right)
{
if (arr[c] < a)
{
b++;
if (b != c)
{
swap(&arr[b], &arr[c]);
print_array(arr, size);
}
}
c++;
}
if (arr[b + 1])
{
swap(&arr[b + 1], &arr[right]);
print_array(arr, size);
}
return (b + 1);
}

/**
 * recursive_quick_sort - recursion
 * @arr: parameter
 * @a: parameter
 * @b: parameter
 * @size: parameter
 */

void recursive_quick_sort(int *arr, int a, int b, size_t size)
{
int c;
if (a < b)
{
c = partition(arr, a, b, size);
recursive_quick_sort(arr, a, c - 1, size);
recursive_quick_sort(arr, c + 1, b, size);
}
}

/**
 * quick_sort - quick sort algorithms
 * @array: parameter
 * @size: parameter
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL)
return;
recursive_quick_sort(array, 0, size - 1, size);
}
