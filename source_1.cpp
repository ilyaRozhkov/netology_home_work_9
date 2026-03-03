#include <iostream>
#include <windows.h>

void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}

int main(int argc, char** argv)
{
	int arr1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = { 9, 8, 7, 6 };
	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	int arr3[] = { 125, 217, 144, 8, 0 };
	int size3 = sizeof(arr3) / sizeof(arr3[0]);


	print(arr1, size1);
	print(arr2, size2);
	print(arr3, size3);

	return 0;
}
