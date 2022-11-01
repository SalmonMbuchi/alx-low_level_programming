#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search
 * @array: pointer to first element in the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index
 */

int binary_search(int *array, size_t size, int value)
{
  if (array)
  {
    int i, j, m;
    i = 0;
    j = size - 1;
    m = ((i + j) / 2);

    while (i <= j)
    {

      printf("Searching in array: ");
      while (i <= j)
      {
        if (i == j)
        {
          printf("%d\n", array[i]);
          break;
        }
        printf("%d, ", array[i]);
        i++;
      }

      if (array[m] < value)
      {
        i = m + 1;
      }
      else if (array[m] > value)
      {
        j = m - 1;
      }
      else
        return (m);
      m = ((i + j) / 2);
    }
  }
  return (-1);
}