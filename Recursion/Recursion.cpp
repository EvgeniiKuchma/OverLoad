#include <iostream>
//Рекурсия фунции факториал прямая
long long factorial(int num)
{
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}
//Число Фибоначчи под номером num 
int fibonacci(int num)
	{
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
	}
int main ()
{
	int n;
	setlocale(LC_ALL, "Russian");

	//Рекурсия фунции факториал

	/*std::cout << "Введите число ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << "\n";*/

	//Число Фибоначчи под номером num
	
	std::cout << "Введите номер числа фибоначчи: ";
	std::cin >> n;
	std::cout << "Число Фибоначчи с номером " << n <<" = " << fibonacci(n);
	std::cout << "\n\nПервые 13 чисел Фибоначчи ";
	for (int i = 0; i < 13; i++)
		std::cout << fibonacci(i) << ", ";
	std::cout << "\n";
	return 0;
}