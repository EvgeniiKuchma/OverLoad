//Шаблон проэкта С++
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//Сортировка первой половины
	
	/*std::cout << "Залдача 1.\nВыводим изначальный массив: \n";
	const int size1 = 10;
	int arr[size1];
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % (20 + 1 - 1) + 1;
		std::cout << arr[i] << ", ";

	}
	std::cout << "\b\b.\n";
	//Пузырьковая сортировка
	for (int i = size1 - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr[j] > arr[i])
			std::swap(arr[j],arr[j+1]);
	//Быстрая сортировка
	std::sort(arr, arr + 5);//(имя массива, имя массива+длина)
	
	//Вывод
	std::cout << "Итоговый массив: \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b.\n";*/

	//Задача 2 Температура

	/*std::cout << "Задача2.\nВведите температуру воздуха: \n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) 
	{
			arr2[i] = rand() % (-1 + 1 -(30)) + (-30);//% 30 -30 
			std::cout << arr2[i] << ", ";
	}
	std::cout << "\b\b.\nВведите число: ";
	std::cin >> n;
	int sum = 0;
	int counter = 0;
		for (int i = 0 ; i <size2; i++)
		{
			sum += arr2[i];
			if (arr2[i] < n)
				counter++;
		}
		std::cout << " Температура опускалась ниже данной отметки: " << counter;
		std::cout <<" средняя температура =" << sum / size2;*/

	//Задача 3 Вхождение в диапазон

	/*std::cout << "Задача 3 ввекдите 2 числа от  0 до 100: \n";
	std::cin >> n >> m;
	const int size3 = 20;
	int arr3[size3];
	std::cout << "Массив: \n";
	srand(time(NULL));
	for(int i = 0 ; i <size3; i++)
	{
		arr3[i] = rand() % 100;
		if (arr3[i] >= n && arr3[i] <= m)
			std::cout << i + 1 << ". " << arr3[i] << "!\n ";
		else
			std::cout << i + 1 << ". " << arr3[i] << "\n ";
	}	*/


		
		
		
		return 0;
}