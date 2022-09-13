#include <iostream>

int main () {
	setlocale(LC_ALL, "Russian");
	//do while Калькулятор
	/*short answer;
	int n1, n2;

	do{
		std::cout << "Выберете номер арифметического действия:\n";
		std::cout << "1.Сумма:\n";
		std::cout << "2.Разность:\n";
		std::cout << "3.Произведение:\n";
		std::cout << "4.Частное:\n";
		std::cout << "5.Завершить работу:\n";
		std::cout << "Введите номер действия:\n";
		std::cin >> answer;
		switch (answer) {
		case 1: 
			std::cout << "Введите 2 числа\n";
			std::cin >> n1 >> n2;
			std::cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n\n"; break;
		case 2:
			std::cout << "Введите 2 числа\n";
			std::cin >> n1 >> n2;
			std::cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n\n"; break;
		case 3:
			std::cout << "Введите 2 числа\n";
			std::cin >> n1 >> n2;
			std::cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n\n"; break;
		case 4:
			std::cout << "Введите 2 числа\n";
			std::cin >> n1 >> n2;
			if (n2 == 0)
				std::cout << "на 0 делить нельзя Вася\n\n";
			else
				std::cout << n1 << " / " << n2 << " = " << n1 / (double)n2 << "\n\n"; break;
		case 5:
			std::cout << "Good Luck.\n"; break;
		default:
			std::cout << "Error input\n\n";
		}
	} while (answer != 5);*/ 
	//For Звезда
	/*const int size = 6;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			if (i == j || i + j == size -1 || j == size/2 || i == size/2)
				std::cout << "* ";
			else
				std::cout << "  ";
		std::cout << "\n";
	}*/
	
	return 0;
}