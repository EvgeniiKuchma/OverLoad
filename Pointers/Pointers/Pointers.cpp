//Шаблон проэкта С++
#include <iostream>
#include <cstdlib>
#include <ctime>
template <typename T> 
void fill_arr(T arr[], const int length, int begin, int end)//zapolnenie massiva slychaynymi chislavi ot begin do end
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
	std::cout << "\b\b.\n\n";
}
template <typename T> 
void sum_arr(T *arr, const int length,T *var)
{
	*var = 0;
	for (int i = 0; i < length; i++)
		*var += *(arr + i);
}
void my_swap(int num1, int num2)
{
	int tmp = num1;
	num1 = num2; 
	num2 = tmp;
}
void pointer_swap(int *pn1, int *pn2)
{
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}

int main() 
{
	setlocale(LC_ALL, "Russian");
		int n = 10, m = 20;

		//Ykazateli na peremennye
		/*std::cout << "Адрес n = " << &n << "\n";// vyvod adresa peremennoi
		
		int *pn;//obivlenii ykazately na tip int; 

		pn = &n;//направляем указатаель на адрес перменной n// alternativa int *pn = &n;
		
		std::cout << "Adres n = " << pn << '\n';

		std::cout << "n = " << n << '\n';//vyvod znachenia ykazately pn;

		std::cout << "n = " << *pn << '\n';//vyvod znacheniy n s pomoshiu razimenovaniy ykazately pn;

		*pn = 15;//menyem znachenie n s pomoshyi razymenovaniy ukazately pn;
		std::cout << "new n = " << n << '\n';

		std::cout << "adres m = " << &m << '\n';

		pn = &m;//perenapravlyem ykazatel na adres peremennoi m;

		std::cout << "adres m = " << pn << '\n';

		int* pm = &m;*/

		//Ykazateli i massivy
		/*const int  size = 5;
		//				0    1   2   3   4
		int  arr[size]{ 10, 20, 30, 40, 50 };
		int* pa2 = &arr[2];
		std::cout << "arr[2] = " << *pa2 << '\n';//30
		pa2++;
		std::cout << "*pa2 = " << *pa2 << '\n';//40
		pa2 -= 2;//20
		std::cout << "*pa2 = " << *pa2 << '\n';
		pa2 = arr;//napravlyen ykazatel pa2 na adres pervogo elementa massiva;
		std::cout << "*pa2 = " << *pa2 <<'\n';//10
		std::cout << "Array : \n";
		for (int i = 0; i < size; i++)
			std::cout << *(pa2 + i) << ' ';//arr[i] = *(arr + i);
		std::cout << '\n';*/
		
		//Ykazateli i funcii
		/*std::cout << n << ' ' << m << '\n';// 10 20
		//my_swap(n, m);ne rabotaet tak parametry eto kopii
		pointer_swap(&n, &m);//rabtaet tak kak peredaytsa adresa peremennyh
		std::cout << n << ' ' << m << '\n';//20 10*/

		//TASK1 summa v peremennuy
		const int size1 = 5;
		int arr1[size1];
		fill_arr(arr1, size1, 1, 11);
		show_arr(arr1, size1);
		sum_arr(arr1, size1, &n);
		std::cout << "Summa elementov massiva = " << n << '\n';
		return 0;
}