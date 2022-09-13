//Персональный шаблон проекта С++
#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;

	//Задача 1 длина числа
	
	/*int counter = 0;
	std::cout << "Enter some number: ";
	std::cin >> n;
	m = n;
	do {
		m /= 10;
		counter++;
	} while (m);
	std::cout << "Number " << n << " size: " << counter << "\n";*/
	
	//Задача 5 Perfect number
	// число  является совершенным если сумма всех его делеителей ( кроме самого числа )равна  самому числу
	int sum = 0;
	std::cout << "Enter some number: ";
	std::cin >> n;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			sum += i;
	if (sum == n)
		std::cout << " Number " << n << " is perfect.\n\n";
	else
		std::cout << " Number " << n << " isn't perfect.\n\n";
	
	return 0;
}

	

