#include <iostream>
#include <string>
#if 3 < 10 //��� 3 > 10 ������� ������ �� ���������� � �������� ������ �� �����
#define PI 3.14
#define MSG "Hello world"
#endif//��������� ����� if

#define forever while (true) //�������� ����������� �����������
#define begin {
#define end }
#undef PI
#define sum(a,b) (a + b)
#define cratarr(t, n, s) t * n = new t[s]//dynamic massive
#define cratarrmx(t, n, s1, s2) t ** n = new t * [s1];\
	for(int  i = 0; i <s1 ; i++)\
		n[i] = new t[s2]

#if 1 == 2
void hi()
{
	std::cout << "Hello!";
}
#elif 2 == 3
void hi ()
{
	std::cout << "Wow!";
}
#else
void hi()
{
	std::cout << "By!" << '\n';
}
#endif

#ifndef sum
const int K = 10;
#error "������!sum ������ ������������."
#else 
const int K = 11;
#endif

#ifndef sum

#endif

#define print(v) std::cout << #v << "= " << v << '\n'//�������� ����������� ���������� � ������

#define show(a, b) x ## y//�������� ������������ ����
int main()
begin
	setlocale(LC_ALL, "Russian");
int n = 1, m = 2, v =5;
int xy = 10;
	//��������� �������������
	/*std::cout << "PI = " << PI << '\n';
	const int wk = 7;
	std::cout << "Wk = " << wk << '\n';
	
	std::cout << MSG << '\n';
	
#undef PI
	//std::cout << PI <<'\n';������ ��� ��� PI �����������
*/
	//�������� ����������� �����������
	/*//forever std::cout << '.';
	n = 0;
	forever begin
	
		std::cout << '.';
		n++;
		if (n >= 5)
		break;
		end
			std::cout << '\n';*/
	//�������//2-x Dynamic massive 
	/*std::cout << sum(1.4, 1) << "\n\n";
	
	cratarr(int, px, 5);
	 px[0] = 1;
	 delete[]px;*/
	 
	  /*int** mx = new int* [10];
	 for (int i = 0; i < 10; i++)
		 mx[i] = new int[7];*/
	 
	/* cratarrmx(int, mat, 5, 4);
	 for(int i = 0 ; i < 5 ; i ++)
	 {
		 for (int x =  0; x < 4; x++ )
	 {
		 mat[i][x] = i * x + 1;
		 std::cout << mat[i][x] << '\t';
		}
		 std::cout << '\n';
	 }
	 for (int i = 0; i < 4; i++)
		 delete[]mat[i]; 
		 delete[]mat;*/

std::cout << show(x, y) << '\n';

	hi();
	print(n);
	print(m);

	std::cout << __LINE__ << '\n'; //������ 60
	std::cout << __LINE__ << '\n';//������ 61
	std::cout << __FILE__ << '\n';//������ ���� � �����
	std::cout << __DATE__ << '\n';//���� ��������� ������ �������
	std::string str = __DATE__;
	return 0;
end