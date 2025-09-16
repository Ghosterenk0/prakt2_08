#include <iostream>

//Вариант 8
int main()
{
	//zd1
	int arr[5] = { 1, 2, 3, 4, 5 };
	int arr2[5];
	int j = 0;
	for (int i = 4; i >= 0; i--)
	{
		arr2[j] = arr[i];
		j++;
	}
	for (int i = 0; i < 5; i++)
	{
		arr[i] = arr2[i];
		std::cout << arr[i] << std::endl;
	}
}

