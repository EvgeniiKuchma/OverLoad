#include <iostream>
#include "structeres.h";
void show_person(person& P)
{
	std::cout << "имя: " << P.name << '\n';
	std::cout << "возраст: " << P.age << '\n'; 
	std::cout << "должность: " << P.position << '\n';
	std::cout << "зарплата: " << P.salary << '\n';
}
