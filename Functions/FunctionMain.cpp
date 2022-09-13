//Шаблон проэкта С++
#include <iostream>
//создаем функцию
int sum(int num1, int num2)//при создании переменной в фунции 
//тип данных указывается отдельно для каждого элемента 
{
	int res = num1 + num2;//return num1+num2 -  2й вариант
	return res;
}
void hi()//в фунциях войд нет ретерн и переменная созданная в фунции удаляется после исполльзования
{
	std::cout << "hi world\n";
	if (1)
		return;
	std::cout << "by world\n";
}
int sum_arr(int arr[], const int length);//прототип фунции для перноса фунции под инт майн

/*int sum_arr(int arr[], const int length)
{
	int res = 0;
	for (int i = 0; i < length; i++)
		res += arr[i];
	return res;
}*/
int main() 
{
	setlocale(LC_ALL, "Russian");
		int n, m;
		
		//hi
		/*hi();//фунция с типом данных войд*/
		
		
		/*std::cout << "Введите 2 числа: \n";
		std::cin >> n >> m;
		std::cout << sum(n, m) <<"\n";
		std::cout << sum(7,14) << "\n";//выводим функцию в консоль*/
		
		//Sum arr через функцию
		const int size = 5;
		int arr[size]{ 6,4,1,9,10 };
		std::cout << sum_arr(arr, size) << "\n";
		
		return 0;
}
int sum_arr(int arr[], const int length)
{
	int res = 0;
	for (int i = 0; i < length; i++)
		res += arr[i];
	return res;
}