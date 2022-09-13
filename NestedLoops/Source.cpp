#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Таблица умножения

	/*std::cout << " Таблица умножения:\n";
	for (int i = 1; i <= 9; i++) {//цикл i
		for (int j = 1; j <= 9; j++)//цикл j
			std::cout << i << " * " << j << " = " << i * j << "\t";//для смещения на следущую позицию не зависимо от длинны выражения
		std::cout << "\n";
	}*/

	//Диоганали и области

	/*int size = 5;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++)*/
			//Главная диагональ
			/*if (i == j)
				std::cout << " * ";
			else
				std::cout << " . ";*/
			//Побочная диагональ
			/*if (i + j == size - 1)
					std::cout << " @ ";
				else
					std::cout << " . ";*/
			//Область над главной диагональю
			/*if (j > i)
				std::cout << " + ";
			else
				std::cout << " . ";*/
			//Область под побочной диагональю
			/*if (j + i > size - 1)
				std::cout << " + ";
			else
				std::cout << " . ";*/
		/*std::cout << "\n";
	}*/
	
	//Задание дом

	/*std::cout << "Введите размер дома:\n";
	std::cin >> n;
	for (int i = n / 2; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (i >= j && i + j >= n - 1)
				std::cout << "|vvv|";
			else
				std::cout << "     ";
		std::cout << "\n";
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			std::cout << "|###|";
	std::cout << "\n";
		}	*/

	//Использование отладчика

	/*int A;
	int B;*/

	/*std::cout << "Ведите 1 число: ";
	std::cin >> n;*/

	/*std::cout << "Ведите 2 число: ";
	std::cin >> B;
	int res = A + B;
	std::cout << A << " + " << B << "=" << res << "\n";*/
	/*for (int i = 1; i <= n; i++)
		std::cout << "число " << i << "\n";
	std::cout << "конец\n";*/

	//Квадрат с символами

	/*std::cout << "\nВведите символ:";
	char sym;
	std::cin >> sym;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++)
			std::cout << sym << ' ';
			std::cout << "\n";}*/
	
	//задача 2 делители  в диапозоне

	/*std::cout << "Введите начало диапазано: ";
	std::cin >> n;
	std::cout << "Введите конец диапазона: ";
	std::cin >> m;
	int counter;
	for (int i = n; i <= m; i++) {//цикл i это числа от n по m
		counter = 1;
		for (int j = 1; j <= i / 2; j++)//цикл j подсчет делителей числа i 
			if (i % j == 0)
				counter++;
		std::cout << "Количество делителей числа " << i << " = " << counter << "\n";

	}*/

	return 0;

}