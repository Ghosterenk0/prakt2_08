#include <iostream>

int main()
{
	//zd2
	srand(time(NULL));
	int matrix[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int f = 0; f < 3; f++)
		{
			matrix[i][f] = rand() % 100;
		}
	}

	int min = INT32_MAX;
	for (int i = 0; i < 3; i++)
	{
		for (int f = 0; f < 3; f++)
		{
			if (min > matrix[i][f]) {
				min = matrix[i][f];
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int f = 0; f < 3; f++)
		{
			std::cout << matrix[i][f] << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << min;
}
