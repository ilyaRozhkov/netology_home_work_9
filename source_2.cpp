#include <iostream>
#include <windows.h>

void swap(int* value1, int* value2) {
	int buffer = *value1;
	*value1 = *value2;
	*value2 = buffer;
}

int main(int argc, char** argv)
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 5, b = 8;

	std::cout << "a = " << a << " b = " << b << std::endl;

	swap(&a, &b);

	std::cout << "a = " << a << " b = " << b << std::endl;

	return 0;
}
