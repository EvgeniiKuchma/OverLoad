#pragma once
#include <iostream>
#include <string>
struct person
{
	std::string name;
	int age = 0;
	std::string position;
	int salary = 0;
};
void show_person(person &P);