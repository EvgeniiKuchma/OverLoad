#include <iostream>
#include <cstdlib>
#include <ctime>
template <typename T>
void show_arr(T arr[], const int length)
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b.\n";
}
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end)
{
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}
template <typename T>
void add_el(T*& arr, const int length, int num)
{
	if (num < 0)
		return;
	T* tmp = new  T[length + num]{};//zapolnenie massiva nulymi(0)
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[]arr;
	arr = tmp;
}
template <typename T>
void substract_al(T*& arr, const int length, int num)
{
	if (num <= 0)
		return;
	if (num > length)
	{
		delete[] arr;
		arr = new int[0];
		return;
	}
	T* tmp = new T[length - num];
	for (int i = 0; i < length - num; i++)
		tmp[i] = arr[i];
	delete[]arr;
	arr = tmp;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


	//Dynamic peremennye;
	/*int* point = new int;//vydelenie uchastka dinamycheskoi pamyti razmerom 4 bayta s pomoshiu operatora new
		*point = 10;
		std::cout << "point  = " << point << "\t";
		std::cout << "*point = " << *point << '\n';
		delete point;//ochishyenye oblasti pamyty na kotoruy napravlen ykazatel
		point = nullptr;
		if (point != nullptr)
			std::cout << *point << '\n';
		else
			std::cout << "Ukazatel neitralen.\n";

		point = new int;//vydelenie novogo uchastka pamyti
		std::cout << "point = " << point << '\n';
		*point = 15;
		std::cout << "*point = " << *point << '\n';*/


		//Dynamic massive 
		/*std::cout << "Entred long massiva: ";
			std::cin >> n;
			if (n < 0)
				std::cout << "Error ! Long can't be - .\n";
			else
			{
			int* mass = new int[n];
			srand(time(NULL));
			for (int i = 0 ; i < n ; i++)
			{
			mass[i] = rand() % 10 + 1;
			std::cout << mass[i] << ', ';
			}
			std::cout << "\b\.\n";
			delete[] mass;//delete dynamic massive purely;
			}*/


			//Task1 incrise massive
			/*std::cout << "Entered long massive :";
			int size1;
			std::cin >> size1;
			int* arr1 = new int[size1];
			std::cout << "iznachalnyi massive \n";
			fill_arr(arr1, size1, 1, 11);
			show_arr(arr1, size1);
			std::cout << "Vvediye kolichestvo nulevyh elementov: ";
			std::cin >> n;
			add_el(arr1, size1, n);
			size1 += n;
			std::cout << "Itogovyi massive:\n";
			show_arr(arr1, size1);*/


			//Task2 decrease massive
			/*std::cout << "Entred long massive: ";
			int size2;
			std::cin >> size2;
			int* arr2 = new int[size2];
			fill_arr(arr2, size2,1,11);
			std::cout << " Begin massive ";
			show_arr(arr2, size2);
			std::cout << "Entred number elements to delete: ";
			std::cin >> n;
			substract_al(arr2, size2, 2);
			size2 -= n;
			std::cout << "Itogovii massive: ";
			show_arr(arr2, size2);*/

			//Dvumernii dinamicheskii massive
			//int *mx =  new int [4][6]ne rabotaet
	int** mx = new int* [4];
	for (int i = 0; i < 4; i++)
		mx[i] = new int[6];
	//v massive 4 ryda i 6 kolonok
	//ochishenie dvumernogo dynamic massive
	//delete [][]mx;//ne rabotaet;
	for (int i = 0; i < 4; i++)
		delete[]  mx[i];
	delete[]mx;

	return 0;
}