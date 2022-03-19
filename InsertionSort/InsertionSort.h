#pragma once

enum EISOrder
{
	EO_Ascending,
	EO_Descending
};

void Insertionsort(int* arr, int size, EISOrder Order);