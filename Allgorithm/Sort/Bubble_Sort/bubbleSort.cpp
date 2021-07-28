#include<iostream>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void printArray(int *arr, int n)
{
	int i;
	std::cout <<"Bubble sort: \n";
	for( i = 0; i < n; i++)
	{
		std::cout << *(arr+i) << " ";
	}
}

void bubbleSort(int *arr, int n)
{
	int i,j;
	bool check  = false;
	for (i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(*(arr + j) > *(arr + j + 1))
			{
				swap((arr + j),(arr + j+1));
				check = true;
			}
		}
		if (check == false)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	bubbleSort(arr, 7);
	printArray(arr, 7);	
	return 0;
}
