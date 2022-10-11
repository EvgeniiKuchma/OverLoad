//Øàáëîí ïðîýêòà Ñ++
#include <iostream>
#include <cstdlib>
#include <ctime>
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) 
{
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}
template <typename T>
void show_arr(T arr[], const int length)
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
		std::cout << "\b\b.\n";
}
template <typename T>
T &max_arr(T arr[], const int length)
{
	T i_max = 0;
	for (int i = 1; i < length; i++)
		i_max = arr[i] > arr[i_max] ? i : i_max;
	/*if (arr[i] > arr[i_max])
		i_max = i;*/
	return arr[i_max];
}
void myswap(int num1, int num2)
{
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void pswap(int *pn1, int *pn2)
{
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}
void refswap(int &refn1, int &refn2)
{
	int tmp = refn1;
	refn1 = refn2;
	refn2 = tmp;
}
int mx[10][2];
int& func(int index) 
{
	return mx[index][1];
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 20;

		//Neitralnii ykazatel
		//int* pn=0;//napravlenie ykazately na neitralnyi adres 1 pervyi sposob

		//int* pn = NULL;//2 sposob

		int* pn = nullptr;
		if (pn == nullptr)
			std::cout << "Ykazatel ne inicializirovan";
		else
			std::cout << *pn << '\n';

		std::cout << *pn << '\n';
		
		int a = 10, b = 20, c = 30;
		// ykazatel na konstantny , ispolzyi razimenovanie 
		//nelza pomenyt znachenie peremennoi na kotoruy ykazyvaet
		int const* pa;
		pa = &a;
		std::cout << *pa << '\n';
		pa = &b;
		std::cout << *pa << '\n';
		//*pa = 15;//error

		//konstantnyi ukazatel
		 const int* pb;
		 pb = &b;
		 std::cout << *pb << '\n';
		 pb = &c;
		 std::cout << *pb << '\n';
		 *pb = 35;//error
		
		 //konstantnyi ykazatel na konstantu//nelzy menyt znacheniy peremennoi a tak ge nelza perenapravlyt ykazatel
		const int* const pc = &c;
		std::cout << *pc << '\n';
		pc = &a;//error
		pc = 50;//error
		
		//ssylka na peremennuy
		int& refn = n;//sozdaem ssylku svazanuy s peremennoi n;
		std::cout << "n = " << n << '\n';
		std::cout << "refn = " << refn << '\n';
		
		refn = 15;

		std::cout << "new n = " << n << '\n';
		
		//Ssylki kak parametry funkciy
		std::cout << n << ' ' << m << '\n';
		//myswap(n, m);//udobno no ne rabotaet
		//pswap(&n, &m);//rabotaet, no neudobno
		refswap(n, m);
		std::cout << n << ' ' << m << '\n';

		//Task1vozvrashyni funkcii
		for (int i = 0; i < 10; i++)
		{
			std::cout << "Ryd nomer" << i + 1 << ": ";
			std::cin >> mx[i][0];
			func(i) = mx[i][0];
		}
		std::cout << " itogovyi massive: \n";
		for (int i = 0; i < 10; i++)
			std::cout << mx[i][0] << '\t' << func(i) << '\n';

		//obnulenii maximalnogo elementa massiva;
		const int size = 5;
		int arr[size]{ 4, 2, 7, 1, 6 };
		std::cout << "Iznachalnyi massive: \n";
		show_arr(arr, size);
		std::cout << "Maximum = " << max_arr(arr, size)<<"\n";
			std::cout << "Obnulyem maxium...\nItigovyi massive:\n";
			max_arr(arr, size) = 0;
			show_arr(arr, size);
		return 0;

}
