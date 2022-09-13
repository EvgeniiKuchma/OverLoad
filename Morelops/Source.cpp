#include <iostream>


int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	int sum;
	//Цикл без условия

	/*for (int i = 0; ; i++) {
		if (i == 10)
			break;//полностью останавливает выполнение цикла
		std::cout << i << "";
	}*/

	//Угадайка //break operator

	/*int magic = 7;
	std::cout << "Давай сыграем,\n я загадал число от 1 до 10 попробуй угадать его \n";
	for (int t = 1; t <= 5; t++) {
		std::cout << "ПоПЫТКА № " << t << "Введи число: ";
		std::cin >> n;
		if (n == magic) {
			std::cout << "you lucky boy\n\n";
			break;//останавливает весь цикл и перходит к концу 
		}
		if (t == 5) {
			std::cout << "Sorry, you looser\n\n";
			break;
		}
		std::cout << "Not, lets try something else";
	}*/

	//Operator Continue

	/*for (int i = 0; i < 20; i++) {
		if (i % 4 == 0)
			continue;//пропускает текущую итерацию путем ее остановки и переходит к следующей
			std::cout << i << "";

	}*/

	//Максимум из 10

	/*std::cout << "Task1.\nEnter first number: \n\n";
	int max;
	std::cin >> max;
	for (int i = 1; i < 10; i++) {//отчет всегда начинается с 0 для этого ограничеваемся не включительным сравнением( n<10)
		std::cout << "\nEnter " << i + 1 << "number\n";
		std::cin >> n;
		if (n > max)
			max = n;//max = n > max ? n : max;с тернарным опрератором читается как: если н больше макс то н это макс иначе макс это макс
	}
	std::cout << " Vaximum = " << max;*/

	//Task2.Сумма не кратных 5

	/*std::cout << "Task2.\n";
	sum = 0;
	for (int i = 0; i < 10; i++) {
		std::cout << "Введите " << i + 1 << "число\n";
		std::cin >> n;
		if (n % 5)
			sum += n;
	}
		std::cout << "Сумма чмсел не КРАТНЫХ 5 ТИ =" << sum << ".\n\n";*/
	

	//Task3 Начало и конец и диапозона..каждое второе в обратном порядке

	/*std::cout << "Введите первое значение диапозона";
	std::cin >> n;
	std::cout << "Enter ending of diaposon";
	std::cin >> m;
	for (int i = m; i >= n; i -= 2) {
		std::cout << i << ", ";
	}
	std::cout << "\b\b.\n\n";//\b стриает последний символ в текущей строке пишется после цикла*/
	
	//Task4.Делитель числа.
	
	/*std::cout << "Введите число: ";
	std::cin >> n;
	std::cout << "делители числа: \n";
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			std::cout << i << ", ";
		}
	}
	std::cout << "\b\b.\n\n";*/

	//Task5.Простое число делится только на 1 и на само себя(обязательно 2 делителя)

	/*std::cout << "\nВведите число: ";
	std::cin >> n;
	int counter = 1;
	for (int i = 1; i <= n / 2; i++){
		if (n % i == 0);
			counter++;
	}
	if (counter == 2)
		std::cout << n << " simple number\n";
	else
		std::cout << n << " not simple number.\n\n";*/
	




	
	return 0;
}