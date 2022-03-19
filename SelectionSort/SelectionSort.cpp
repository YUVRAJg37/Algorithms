#include "SelectionSort.h"

void Selectionsort(int* arr, int size)
{

	for (int i = 0; i < size-1; i++)
	{
		int k = i;

		for(int j=i+1; j<size; j++)
		{
			if (arr[j] < arr[k])
				k = j;
		}

		int temp = arr[k];
		arr[k] = arr[i];
		arr[i] = temp;
	}


}