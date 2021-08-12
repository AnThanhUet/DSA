#include <iostream>
#include <utility>
#include <iterator>

int main()
{
	int array[]{ 30, 50, 20, 10, 40 };
	constexpr int length{ static_cast<int>(std::size(array)) };
//	int length{ 5 };
	for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
	{
		// gia su so nho nhat la dau mang
		int smallestIndex{ startIndex };
		// kiemtra cac phan tu con lai
		for (int currentIndex{ startIndex + 1}; currentIndex < length; ++currentIndex)
		{
			//Neu tim thay 1 phan tu nho hon phan tu dau
			if (array[currentIndex] < array[smallestIndex])
				//gan lai gia tri do len dau
				smallestIndex = currentIndex;
		}
		// tim dc so nho nhat trong mang
		std::swap(array[startIndex], array[smallestIndex]);
	}
	// in mang sau sap xep
	for (int index{ 0 }; index < length; ++index)
	{
		std::cout << array[index] << " ";
	}
	std::cout << std::endl;
	return 0;
}
