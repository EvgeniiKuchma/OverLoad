#include <iostream>


int main () {
	setlocale(LC_ALL, "Russian");
	
	//Пример If else

	/*std::cout << "Введите число от 1 до 4\n";
	int n;
	std::cin >> n;

	if (n == 1)
		std::cout << "Один\n";
	else
		if (n == 2)
			std::cout << "Два.\n";
		else
			if (n == 3)
				std::cout << "Три.\n";
			else
				if (n == 4)
					std::cout << "Четыре.\n";
				else
					std::cout << "Ошибка ввода\n";*/

	//Метод switch

	/*минусы метода switch:
	1. нельзя сравнивать диапазон (например от 1 до 100);
	2. в кейсы нельзя помещать переменные значения(в кейсах может быть только константы);
	3. ТОЛЬКО целочисленные значения;
	4. нельзя повторять кейсы.
	
	//char sym = 'A';//символьные значения только в одинарных ковычках

	switch (n){//switch (sym) {
	case 1:std::cout << "Один\n"; break;
	case 2:std::cout << "Два\n"; break;
	case 3:std::cout << "три\n"; break;
	case 4:std::cout << "четыре\n"; break;
	default:std::cout << "Ошибка ввода\n"; break;//в конце системы break не ставится
	}*/

	//Заданиен "Конвертер в НЕХ"

	/*std::cout << "Введите число от 0 до 15\n";
	int dec;
	std::cin >> dec;
	switch (dec) {
	case 0: case 1: case 2: case 3: case 4:
	case 5: case 6: case 7: case 8: case 9:
		std::cout << dec << " в десят.= " << dec << " в шестнадцати.\n"; break;
	case 10:
		std::cout << " 10 в деят. = А в шест.\n"; break;
	case 11:
		std::cout << " 11 в деят. = B в шест.\n"; break;
	case 12:
		std::cout << " 12 в деят. = C в шест.\n"; break;
	case 13:
		std::cout << " 13 в деят. = D в шест.\n"; break;
	case 14:
		std::cout << " 14 в деят. = E в шест.\n"; break; 
	case 15:
		std::cout << " 15 в деят. = F в шест.\n"; break;
	default:
		std::cout << "Ошибка ввода.\n";*/

	//Тернарный опрератор "?"-(то) ":" -(иначе)

	/*int x;
	std::cout << "Введите число: ";
	std::cin >> x;

	x > 0 ? std::cout << "TRUE.\n" : std::cout << "FALSE.\n";
	//условие			действи1				действие2

	int A, B;

	std::cout << "ВВедите 2 числа: ";
	std::cin >> A >> B;
	int max = (A > B) ? A : B;//нельзя вкладывать несколько действий
	std::cout << "Макс.= " << max << ".\n";*/

	//Задача 1
	
	/*std::cout << "Enter number: ";
	int D;
	std::cin >> D;
	if (D>=0 && D <= 100)
		std::cout << "Число принадлежит диапазону от 0 до 100.\n\n";
	else 
		if(D>=101 && D<=200)
			std::cout << "Число принадлежит диапазону от 101 до 200.\n\n";
		else
			if(D>=201 && D<=300)
				std::cout << "Число принадлежит диапазону от 201 до 300.\n\n";
			else
				std::cout << "Число НЕ принадлежит диапазону ни одному диапозону.\n\n";*/

	//Здача 2

	/*std::cout << "ВВедите 2 числа: \n";
	double n, m;
	std::cin >> n >> m;

	std::cout << "выберите операцию: \n";
	std::cout << "1. сумма;\n";
	std::cout << "2. разность;\n";
	std::cout << "3. Произведение;\n";
	std::cout << "4. Частное\n";
	std::cout << " ВВод->";

	short answer;
	std::cin >> answer;
	
	switch (answer) {
	case 1:std::cout << n << "+" << m << "=" << n + m << ".\n\n"; break;
	case 2:std::cout << n << "-" << m << "=" << n - m << ".\n\n"; break;
	case 3:std::cout << n << "*" << m << "=" << n * m << ".\n\n"; break;
	case 4:
		if (m == 0)
			std::cout << "На 0 делить нельзя.\n\n";
		else
		std::cout << n << "/" << m << "=" << n / m << ".\n\n"; break;
	default:std::cout << "Ошибка ввода.\n\n"; break;}*/
	
	
	return 0;

}