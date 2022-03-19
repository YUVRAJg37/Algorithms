#include <iostream>
#include "Countsort.h"

void Log(int* arr,int size);

int main()
{
	const int size = 7;
	int arr[size] = { 9, 1, 4, 14, 4, 15, 6 };

	Log(arr, size);
	CountSort(arr, size);
	Log(arr, size);
}

void Log(int* arr, int size)
{
	std::cout << "Array : ";
	for(int i=0; i<size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
