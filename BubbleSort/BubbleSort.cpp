#include "BubbleSort.h"
#include <iostream>

void Bubblesort(int* arr, EOrder order, int l)
{
	bool flag = false;

	for(int i=0; i < l-1; i++)
	{
		if(order == EOrder::EAscending)
		{
			for(int j=0; j < l-1-i; j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					flag = true;
				}
			}

			if (!flag)
			{
				std::cout << "Data Already Sorted \n";
				return;
			}
		}
		else
		{
			for (int j = 0; j < l - 1 - i; j++)
			{
				if (arr[j] < arr[j + 1] )
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					flag = true;
				}
			}

			if (!flag)
			{
				std::cout << "Data Already Sorted \n";
				return;
			}
		}
	}
}
