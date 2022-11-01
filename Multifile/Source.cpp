#include <iostream>
#include "Function.h"//подключение файла-заголовочника с прототипами функций
#include "structeres.h"//подклбчение файла-заголовочника с описанием структуры и прототипами функций
#include "data.h";//подключение файла-заголовочника с дополнительными переменными
int main() 
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	//Библитоке с функциями
	/*std::cout << sum_AB(5, 4);

	const int size = 5;
	int arr[size]{ 1, 2, 3, 4, 5, };
	show_arr(arr, size);
	std::cout << "Enter number : ";
	std::cin >> n;
	std::cout << absolute(n) << '\n';*/
	//Библиотека со структурой
	/*person tom{"Tom Smith", 18, "manager", 45000};
	show_person(tom);*/
	//Библиотека с доп переменными
	/*std::cout << "PI = " << _PI;
	_N = 10;
	std::cout << "\n\nN = " << _N << '\n';*/
	return 0;
}