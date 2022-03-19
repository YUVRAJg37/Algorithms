#include "InsertionSort.h"

void Insertionsort(int* arr, int size, EISOrder Order)
{
	for(int i=1; i<size; i++)
	{
		if(arr[i]<arr[i-1])
		{
			int temp = arr[i];
			int j = i - 1;

			while(temp<arr[j] && j>=0)
			{
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = temp;
			/*for(int j = i-1 ; j>=0; j--)
			{
				if (temp < arr[j])
				{
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}*/
		}
	}
}