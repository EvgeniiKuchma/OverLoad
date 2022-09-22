//Шаблон проэкта С++
#include <iostream>
int sum_A_B(int A , int B)
{
	if (A == B - 1)
		return A + B;
	return sum_A_B(A, B - 1) + B;
}
template<typename T> 
void show_arr(T arr[], const int length)
{
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
template<typename T>
void move_arr(T arr[], const int length, int num)
{
	for(int j = 0; j < num; j++)
		for (int i = length - 1; i > 0; i--)
			std::swap(arr[i], arr[i - 1]);
	
}

int main() 
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	/*std::cout << sum_A_B(5, 9) << '\n';*/
	
	
	const int size = 5;
	int arr[size]{ 1,2,3,4,5 };
	std::cout << "Изначальный массив: \n";
	show_arr(arr, size);
	std::cout << "Введите ЧИСЛО: ";
	std::cin >> n;
	move_arr(arr, size, n);
	std::cout << "Итоговый масив:\n";
	show_arr(arr, size);

	return 0;
}