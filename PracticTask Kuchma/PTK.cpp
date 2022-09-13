#include <iostream>

int main() {
	int n;

	//Task2.

	std::cout << "Enter number: \n";
	std::cin >> n;
	if (n>=0)
	std::cout << "|" << n << "|"<<"="<<n;
	else
		std::cout << "|" << n << "|" << "=" << n*-1;

	//Task3 

	std::cout << "Enter number: \n";
	std::cin >> n;
	if ( n % 3 == 0)
		std::cout << "True\n";
	else
		std::cout << "False\n";
	
	//Task4

	std::cout << " Please enter 3 numbers: \n";
	double	N1, N2, N3;

	std::cin >> N1 >> N2 >> N3 ;
	if (N1 <= N2 && N1 <= N3 )
		std::cout << "min numder :" << N1<<"\n";
	else
		if (N2 <= N1 && N2 <= N3 )
			std::cout << "min number: " << N2<<"\n";
		else
			std::cout << "min number: " << N3<<"\n";

	//Task5

	std::cout << "Enter number: \n";
	std::cin >> n;
	int n1 = n / 10 % 10;
	int n2 = n % 10;
	if (n >= 100 || n < 10)
		std::cout << "Error enter ";
	else
		if (n1 > n2)
			std::cout << "n1=max  \n";
		else
			if (n1 < n2)
				std::cout << "n2=max \n";
			else
				std::cout << "n1=n2 \n";
	
	
	//Task6
	std::cout << "Task // Enter simbol (cat – c/C, dog – d/D, sheep – s/S) : \n";
	char sym;
	std::cin >> sym;
	switch(sym){
	case'C':case'c':
		std::cout << "Miuuuu\n\n"; break;
	case'D':case'd':
		std::cout << "Aufff\n\n"; break;
	case'S':case's':
		std::cout << "Beeee\n\n"; break;}

	
	return 0;
}
