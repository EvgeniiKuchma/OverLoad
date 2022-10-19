#include <iostream>
#include <string>
#include <cmath>
struct date
{
	int day{};//инициаклизаци€ = 0
	int month{};
	int year{};
};
struct person
{
	std::string name;
	date birthday;
	int salary = 0;
};
void show_person(person &P)
{
	std::cout << "Name: " <<P.name << '\n';
	std::cout << "Date birthday: "
		<< P.birthday.day << '.'
		<< P.birthday.month << '.'
		<< P.birthday.year << '\n';
	std::cout << "salary: " << P.salary <<'\n';
}
person input_person()
{
	person tmp;
	std::cout << "Enter the name: ";
	std::cin.ignore();
	getline(std::cin, tmp.name);
		std::cout << "Enter the birthday: ";
	std::cin>> tmp.birthday.day
		>> tmp.birthday.month 
		>>tmp.birthday.year ;
	std::cout << "Enter salary: ";
	std::cin >> tmp.salary;
	return tmp;
}
void fill_person(person &P)//оптимально оптимизированна€ фунци€
{
	std::cout << "Enter the name: ";
	getline(std::cin, P.name);
	std::cout << "Enter the birthday: ";
	std::cin >> P.birthday.day
		>> P.birthday.month
		>> P.birthday.year;
	std::cout << "Enter salary: ";
	std::cin >> P.salary;
	}
//T1
struct persona 
{
	std::string name;
	int age{};
	int coins[5]{};
};
void show_persona(persona &P)
{
	std::cout << "Name: " << P.name << '\n';
	std::cout << "Age: " << P.age << '\n';
	std::cout << "Coins: ";
	for (int i = 0; i < 5; i++)
		std::cout << P.coins[i] << ' ';
	std::cout << '\n';
}
 inline int year_of_birth(persona &P, int year)
{
	return year - P.age;
}
 int cash(persona &P)
 {
	 int sum = 0;
	 for (int i = 0; i < 5; i++)
		 sum += P.coins[i];
	 return sum;
 }
 //T2
 struct point 
 {
	double x = 0;
	double y = 0;
  };
 int compare_distance(point &P1, point &P2)
 {
	 double dist1 = sqrt(pow(0 - P1.x, 2) +
		 pow(0 - P1.y, 2));
	 double dist2 = sqrt(pow(0 - P2.x, 2) +
		 pow(0 - P2.y, 2));
	 if (dist1 > dist2)
		 return 1;
	 if (dist1 < dist2)
		 return -1;
	 return 0;
 }
int main ()
{
	int n;
	//Simple structur person
	/*struct person //обь€вление структуры person дл€ ее реализации создаютс€ обьекты р1 и р2
	{
		std::string name;
		int age =18;
		std::string position = "programer";//значение добовл€емое по умолчанию в случае отсутстви€ значени€ в обращении к пол€м
		int salary = 60000;
	}//обращение к пол€м обьекта структуры
	p1, p2{ "Bob Thomas", 40, "director", 120000 };//пернвый и второй вариант
	p1.name = "Tom Smith";
	p1.age = 18;
	//p1.position = "manager";
	p1.salary = 50000;
	
	std::cout << "Name: " << p1.name << '\n';
	std::cout << "Age: " << p1.age << '\n';
	std::cout << "position: " << p1.position << '\n';
	std::cout << "salary: " << p1.salary << '\n';
	std::cout << "\n------------------------\n\n";
	std::cout << "Name: " << p2.name << '\n';
	std::cout << "Age: " << p2.age << '\n';
	std::cout << "position: " << p2.position << '\n';
	std::cout << "salary: " << p2.salary << '\n';
	//изменение всего содержимого обьекта структуры 
	p2 = {"Adam Tomas", 41, "president", 500000};
	//пр€мое присваивание по€ обьекта  р2 значений из полей обьекта р1
	p2 = p1;//копирование данных одной структуры в другую
	
	//јльтернативный способ создани€ обьекта структуры
	person p3{"Jake Holand", 30, "policeman", 45};
	std::cout << "\n------------------------\n\n";
	std::cout << "Name: " << p3.name << '\n';
	std::cout << "Age: " << p3.age << '\n';
	std::cout << "position: " << p3.position << '\n';
	std::cout << "salary: " << p3.salary << '\n';*/

	//Structures person and date
	/*person p4;
	p4.name = "Tom Smith";
	//p4.birthday.day = 1;//1 вариант обращени€
	//p4.birthday.year = 1970;
	//p4.salary = 50000;
	p4.birthday = { 1, 1, 1970 };//2 вариант обращени€
	p4.salary = 50000;

	person p5
	{
	"Bob Thomas",// string name
		{5, 10, 2000},//date birthday
		20000// int salary
	};

	person* pp5 = &p5;//указатель 

	std::cout << "Name: " << pp5 -> name << '\n';//обращение к пол€м структуры через разименование со специальным синтаксисом указател€
	std::cout << "Date birthday: " 
		<< pp5->birthday.day << '.' 
 		<< pp5->birthday.month << '.' 
		<< pp5->birthday.year << '\n';

	std::cout << "----------------------\n\n";

	show_person(p4);
	std::cout << "\n--------------------\n\n";
	// person p6 = input_person();
	person p6;
	fill_person(p6);
	std::cout << "\n--------------------\n\n";
	show_person(p6);*/
	
	//Task 1 coins

	/*std::cout << "Task1.\Object:\n\n";
	persona A{
		"Nick Jackobs",
		20,
		{1, 2, 2, 5, 1}
	};
	show_persona(A);
	std::cout << "Year of birth: " << year_of_birth(A, 2022) << '\n';
	std::cout << "Total cash: " << cash(A) << '\n';*/

	//Task 2 coordinate

	std::cout << "t1.\nPoint A: ";
	point A{ 4.5, -1.3 };
	std::cout << A.x << ", " << A.y << '\n';
	std::cout << "Point B: ";
	point B{ 6.1, 0.9 };
	std::cout << B.x << ", " << B.y << '\n';
	std::cout << compare_distance(A, B)<<'\n';
	return 0;
}