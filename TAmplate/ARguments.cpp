//Шаблон проэкта С++
#include <iostream>
int g = 10;//глобальная переменная 
void arr_x5(int arr[])//при передаче массива в фунцию все изменения происходят и самом теле пе/рдаваемого массива 
{
	//el *= 5;
	arr[0] *= 5;
}
void mult_X5(int num)
{
	//std::cout << num * 5 << "\n";
	//return num * 5;
	num *= 5;//2 разные переменные
}
int power(int num, int p = 2)
{
	int res = 1;
	for (int i = 1; i <= p; i++)
		res *= num;
	return res;
}
int main() {
	setlocale(LC_ALL, "Russian");
		int n, m;
		//параетры и массивы
		/*n = 4;//2 разные переменные
		mult_X5(n);
		std::cout << n << "\n";*/
		//параметры и перменные
		/*int mass[3]{2,3,40};//при создании массива с инициализацией элементов в теле массива длину массива можно не указывать arr[]{0,0,0,} например
		arr_x5(mass);
		//arr_x5(mass[0]);//передаем 1 й элемент массива с индексом 0 , первый элемент массива имеет индекс 0
		std::cout << mass[0] << "\n";*/
		//параметры по умолчанию
		/*std::cout << power(3, 3) << "\n";
		std::cout << power(10) << "\n";
		std::cout << power(5, 4) << "\n";
		std::cout << power(9) << "\n";
		std::cout << power(19) << "\n";*/
		std::cout << g << std::endl;
		return 0;
}