#include <iostream>

void printArray(int *arr, int n)
{
	int i;
	for (i = 0; i < n-1; i++)
	{
		std::cout << *(arr + i) << "\n";
	}
}

void insertSort(int *arr, int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		auto key = *(arr + i);
		j = i - 1;
		
		while (j >= 0 && *(arr + j) > key)
		{
			*(arr + j + 1) = *(arr + j);
			j = j - 1;
		}
		*(arr + j + 1) = key;
	}
}

int main()
{
	int arr[] = {12, 11, 13, 5, 6};
	insertSort(arr,5);
	printArray(arr,5);
	return 0;
}
