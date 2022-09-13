#include <iostream>;


int main() {
	//переменные
	int N;//обявляем перменную типа int c именем N 
	//на данный момент переменнная неинициализированнна

	int M = 10;//обьявляем переменную типа int  с именем 
	//М и инициализируем ее значение 10;
	N = 5;//инициализируем n со значением 5;
	std::cout << "N="<<N<<"\n";
	std::cout << "M=" << M << "\n";
	double X = 4.5;//обьявляем переменную  double сименем x и инициализируем ее;
	//значанием 4.5;
	std::cout << "X = " << X << "\n";
	X = -1.01;//меняем значение x";
	std::cout << "New X =" << X << "\n";
	const short weekday=7;//создаем константу со значением 7

	//weekday = 8; ошзибка константу нельзя менять 

	std::cout << "Weekday = " << weekday << "\n";
		
	//ввод данных
	std::cout << "Enter number:";
	int A;
	std::cin >> A;//вводим знаение в консоль которое помещается в переменную А 
	//вводим 2 значения которые помещаются в переменные В и С
	std::cout << "A=" << A << "\n";
	int B;//или можно напиисать int B,C
	int C;
	std::cout<<"Enter two nubers:";
	std::cin >> B >> C;
	std::cout << "B = " << B << "\n";
	std::cout << "C = " << C << "\n";

	//Игра-обманка
	std::cout << "Let's play\nEnter number";
	int E;
	std::cin >> E;
	std::cout << "I have " << E + 1 << "!\n";
	std::cout << "I'm winner!!!)";
	return 0;

	}