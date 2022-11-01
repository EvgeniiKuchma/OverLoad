#pragma once
double sum_AB(double A, double B);
//вывод массива в консоль
void show_arr(int arr[], const int length);
template < typename T>
T absolute(T num)
{
	return num < 0 ? -num : num;
}