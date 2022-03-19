#include "Mergesort.h"

void MergeSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		MergeSort(arr, low, mid);
		MergeSort(arr, mid + 1, high);
		Merge(arr, low, mid, high);
	}
}

void Merge(int arr[], int low, int mid, int high)
{
	int i, j, k;
	i = low;
	k = low;
	j = mid + 1;

	int b[100];

	while (i <= mid && j <= high)
	{
		if (arr[i] < arr[j])
		{
			b[k] = arr[i];
			i++;
			k++;
		}
		else
		{
			b[k] = arr[j];
			k++;
			j++;
		}
	}

	while (i <= mid)
	{
		b[k] = arr[i];
		k++;
		i++;
	}

	while (j <= high)
	{
		b[k] = arr[j];
		k++;
		j++;
	}

	for (int x = low; x <= high; x++)
	{
		arr[x] = b[x];
	}
}