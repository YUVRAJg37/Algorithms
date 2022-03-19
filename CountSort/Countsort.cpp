#include "Countsort.h"

int max(int *arr, int size)
{
	int x = INT_MIN;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > x)
			x = arr[i];
	}

	return x;
}

void CountSort(int* arr, int size)
{
	int i = 0, j = 0;
	int n = max(arr, size);
	int* b = new int[n + 1];

	for (int i = 0; i <= n; i++)
	{
		b[i] = 0;
	}

	for (int i = 0; i < size; i++)
	{
		b[arr[i]] += 1;
	}

	i = 0;

	while (i <= n)
	{
		if (b[i] > 0)
		{
			arr[j] = i;
			b[i] -= 1;
			j++;
		}
		else
		{
			i++;
		}
	}
}
