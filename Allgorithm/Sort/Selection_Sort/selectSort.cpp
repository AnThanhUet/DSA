#include <iostream>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selectSort(int *arr, int n)
{
	int i,j, min;
	for (i = 0; i < n-1; i++)
	{
		// Find min
		min = i;
		for (j = i+1; j < n; j++)
		{
			if(*(arr + j) < *(arr + min))
				min = j;
		}
		swap((arr + min), (arr + i));
	}
}

void printArray(int arr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		std::cout << arr[i] << " " << std::endl;
	}
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr) / sizeof(arr[0]);
	selectSort(arr, n);
	std::cout << "Sorted arr: \n";
	printArray(arr, n);
	return 0;
}
