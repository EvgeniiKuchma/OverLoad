#include "Function.h"
#include <iostream>
double sum_AB(double A, double B)
{
	return A + B;
}

void show_arr(int arr[], const int length)
{
	std::cout << "\n\n";
		for (int i = 0; i < length; i++)
		std::cout << arr[i]<<' ';
	std::cout << "\b.\n";
};

