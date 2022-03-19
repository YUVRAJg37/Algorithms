#include "Quicksort.h"

void QuickSort(int* arr, int size, int high, int low)
{
	int PartitionIndex;

	if (low < high)
	{
		PartitionIndex = Partition(arr, low, high);
		QuickSort(arr, size, high, PartitionIndex + 1);
		QuickSort(arr, size, PartitionIndex - 1, low);
	}

}

int Partition(int* arr, int low, int high)
{
	int Pivot = arr[low];

	int i = low + 1;
	int j = high;

	do
	{
		while (arr[i] <= Pivot)
		{
			i++;
		}

		while (arr[j] > Pivot)
		{
			j--;
		}

		if (i < j)
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	} while (i < j);

	int temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;

	return j;
}
