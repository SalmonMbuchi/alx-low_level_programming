#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: pointer to the first element in the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int len = size - 1;

	if (array)
	{
		i = 0;
		while (i <= len)
		{
			if (array[i] == value)
			{
				return (i);
			}
			else if (i == len && value != array[i])
			{
				return (-1);
			}
			else
				printf("Value checked array[%d] = %d\n", i, array[i]);

			i++;
		}
	}
	return (-1);
}
