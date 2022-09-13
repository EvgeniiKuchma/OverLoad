//Шаблон проэкта С++
#include <iostream>
//Задача 1//если  прототип использован  то  внизу в самом теле фунции параметры не прописываются int width, int heigth
void rect(int width = 5, int heigth = 5)
{
	for (int y = 0; y < heigth; y++)
	{
	for (int x = 0; x < width; x++)
	std::cout << "#";
	std::cout << "\n";
	}
}
//Задача 2 простое число
bool is_prime(int num) 
{
	int counter = 1;
	static int primes = 0;
	for (int i = 1; i <= num / 2; i++)
		if (num % i == 0)
			counter++;
	if (counter == 2) {
		primes++;
		return true;
	}
	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");
		int n, m;
		
		//Прямоугольник Задача 1
	
		/*std::cout << "W ";
		std::cin >> n;
		std::cout << "H ";
		std::cin >> m;
		rect(n, m);
		std::cout << "-------\n";
		rect();
		std::cout << "\n";*/

		//Задча 2 

		std::cout << "Введите число: ";
		std::cin >> n;
		if (is_prime(n))//ветвление при работе с типом данных bool  и  вызов 
			std::cout << "Число простое\n";
		else
			std::cout << "Число не простое\n";

		
		return 0;
}