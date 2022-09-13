#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//Task 1.Code of symbol;
	
	std::cout << "Task // Enter simbol: \n";
	char sym;
	std::cin >> sym;//Символ по таблице ACii ;
	std::cout << "Enter number: \n";
	std::cin >> n;
	if (sym>=n)
		std::cout << "simbol=>number: \n";
	else
		std::cout << "simbol<=number: \n";

	//Task2.Polindrom;

	std::cout << "Task // Enter number: ";
		std::cin >> n;
		short n1 = n / 1000 % 10;
		short n2 = n / 100 % 10;
		short n3 = n / 10 % 10;
		short n4 = n % 10;
		if (n1 == n4 && n2 == n3)
			std::cout << "Polindrom=" << n<<"\n";
		else
			std::cout << "Not polindrom\n";

	//Task3.Hex to Dex;

	std::cout << "Task // Enter HEX number: ";
	char hex;
	std::cin >> hex;
	switch (hex)
	{
	case'0':case'1':case'2':case'3':case'4':
	case'5':case'6':case'7':case'8':case'9':
		std::cout << hex << " Hex = " << hex << " dex\n\n"; break;
	case'A':case'a':
		std::cout << "A to hex = 10 to Dex\n\n"; break;
	case'B':case'b':
		std::cout << "B to hex = 11 to Dex\n\n"; break;
	case'C':case'c':
		std::cout << "C to hex = 12 to Dex\n\n";break;
	case'D':case'd':
		std::cout << "D to hex = 13 to Dex\n\n"; break;
	case'E':case'e':
		std::cout << "E to hex = 14 to Dex\n\n"; break;
	case'F':case'f':
		std::cout << "F to hex = 15 to Dex\n\n"; break;
		default: std::cout << "Not number\n\n"; break;}

	//Task4.Fist number in the and;

	std::cout << "Task // Введите 5значное число ";
	std::cin >> n;
	std::cout << n / 10000 + n % 10000 * 10 << "\n\n";

	//Task5.Test;

	std::cout << "Task // Пройдите тестирование\n\n";
	int score = 0;
	//1 q
	std::cout << "Сколько байт занимает тип данных int?\n";
	std::cout << "4\n";
	std::cout << "6\n";
	std::cout << "7\n";
	std::cout << "Ответ->";
	std::cin >> n;
	if (n == 1)
		score++;
	//2 q 
	std::cout << "Сколько существует escape-последовательностей\n";
	std::cout << "5\n";
	std::cout << "6\n";
	std::cout << "7\n";
	std::cout << "Ответ->";
	std::cin >> n;
	if (n == 2)
		score++;
	//3 q
	std::cout << "Какой тип данных использкует С++\n";
	std::cout << "Статическая\n";
	std::cout << "Динамическая\n";
	std::cout << "Формальная\n";
	std::cout << "Ответ->";
	std::cin >> n;
	if (n == 1)
		score++;
	//Total
	std::cout << "Вы набрали " << score << " из 3\n\n";
	switch(score) {
	case 0:std::cout << "ye\n\n"; break;
	case 1:std::cout << "ye1\n\n"; break;
	case 2:std::cout << "ye2\n\n"; break;
	case 3:std::cout << "ye3\n\n"; break;}

	//Task6.Age пропущена так как рассмотрена ранее(самостоятельно);

	//Task 7.discount

	std::cout << "Task // Enter summ discount: ";
	std::cin >> n;
	if (n >= 200 && n < 300)
		std::cout << "You pay 3%: " << n * 0.97 << "\n\n";
	else
		if (n >= 300 && n < 500)
			std::cout << "You pay 5%: " << n * 0.95 << "\n\n";
		else
			if (n >= 500)
				std::cout << "You pay 7%: " << n * 0.93 << "\n\n";
			else
				std::cout << "You pay: " << n;
	
	//Task8.(решить самостоятельно);

	//Task9.Enter number;

	std::cout << "Task // How mach is number be enter later?: \n";
	std::cin >> n;
	int num;//вводимы числа;
	int sum = 0, max=0;
	switch (n) {
	case 4:
		std::cout << "enter number 4: ";
			std::cin >> num;
			sum += num;
			max = num > max ? num : max;
	case 3:
		std::cout << "enter number 3: ";
		std::cin >> num;
		sum += num;
		max = num > max ? num : max;
	case 2:
		std::cout << "enter number 2: ";
		std::cin >> num;
		sum += num;
		max = num > max ? num : max;
	case 1:
		std::cout << "enter number 1: ";
		std::cin >> num;
		sum += num; 
		max = num > max ? num : max;
		std::cout << "Summa = " << sum<<"\n";
		std::cout << "Их среднее арифметическое = " << sum /(double) n; "\n";
		std::cout << "\nMaximum = "<<max<<"\n"; break;
	default:std::cout << "Error enter "; break;
	}
	
	return 0;

}