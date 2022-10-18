#include <iostream>
#include <string>//библиотека позвол¤юща¤ работать с классом string(со строковыми переменными
std::string repeat_str(std::string str, int num)
{
	std::string tmp;
	for (int i = 0; i < num; i++)
		tmp += str;
	return tmp;
}
bool is_spam(std::string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
	std::string spams[]{ "100% free", "sales increase","only today" };
	for (int i = 0; i < 3; i++)
		if (str.find(spams[i]) < str.length())
			return true;

	return false;
}
int main() 
{
	setlocale(LC_ALL, "Russian");

	int n;
	//строковые массивы
	/*char char_str[4]{'H', 'i', '!', '\0'};//
	for(int i = 0; i < 4; i++)
		std::cout << char_str[i];
	std::cout << "\n";

	std::cout << char_str << '\n';

	char char_str2[]{ "Hello world!" };//длинна массива определе¤тс¤ длинной символов в сообщении
	std::cout << char_str2 << '\n';
	std::cout << char_str2[4] << '\n';//обращенние к элементу массива*/
	
	//строковые перменные string
	/*std::string str;//создание строковой перменной типа STRING//библиотека string относитс¤ к пространсчтву имен std;
	std::cout << str << '\n';//(пуста¤ строка) если не инициализировать строковую переменную она становитс¤ пустой строкой автоматичеки
	str = "Hello world!";//ининциализаци¤ строковой переменной
	std::cout << str << '\n';
	
	str  += "By world!";//конкатинация строки
	std::cout << "----------\n";
	std::cout << str + "WOW!" << '\n';*/

	//ввод строки
	/*std::string name;
	std::cout << "¬ведите им¤: ";
	//std::cin >> name;// происходит ввод до ближайшего разделител¤
	getline(std::cin, name);//ввод до конца строки
	std::cout << "ѕривет, " << name << "!\n";

	std::cout << "¬едите возраст: ";
	short age;
	std::cin >> age;
	std::cout << age << "?Bay!\n";
	
	std::cin.ignore();//команда очистки буфера input stream
	
	std::cout << "¬ведите должность: ";
	std::string pos;
	getline(std::cin, pos);
	std::cout << "¬сегда хотел быть " << pos <<'\n';

	std::cout << "ѕока мистер " << name[0] << '\n';

	name = "Hello \nworld\t!";//расположение эскейп последовательности  внутри строк
	std::cout << name << '\n';*/

	//метод строк
	std::string str = "Hello world!";

	//методы length и  size//возвращают длинну строки
	/*std::cout << str.length() << '\n';
	std::cout << str.size() << '\n';*/

	//метод insert//void метод//вставка содержимого внутрь строки
	/*str.insert(3, "000");
	std::cout << str << '\n';*/

	//метод replace//void метод
	/*str.replace(3, 5, "123");//3 - позици¤, 5 - колво удал¤емых элемнетов, "123" - замена части строки новым содержимым
	std::cout << str << '\n';*/

	//метод find.поиск первого вхождени¤ подстроки в строку// возвращение индекса подстроки в строке
	/*std::cout << str.find("o") << '\n';
	std::cout << str.find("lo") << '\n';//возвращение индекса начала (позиции l - 3)подстроки в строке
	std::cout << str.find("l", 5) << '\n';// возвращение индекса подстроки в строке, начала поиска с позиции 5*/
	
	//метод rfind.метод нажаждени¤ последнего индекса подстроки входения в строку
	/*std::cout << str.rfind("o") << '\n';//7
	std::cout << str.rfind("wo") << '\n';//6
	std::cout << str.rfind("l", 5) << '\n';*/
	
	
	//метод substr возвращает подстроку с переданной позиции
	/*std::cout << str.substr(3) << '\n';//no world! 
	std::cout << str.substr(3, 5) << '\n';//lo wo выводим с 3й позиции 5 элементов
	
	//число в строку преобразование
	/*std::cout << "введите число: \n";
	std::cin >> n;
	str = std::to_string(n);
	std::cout << str + '\n';*/

	//строка в число
	/*std::cout << "Введите число: ";
	getline(std::cin, str);
	int num = stoi(str);//до первого символа
	num++;
	std::cout << num << '\n';*/

	//Возведение в верхний регистр(заглавные буквы)функция toupper 
	/*for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	std::cout << str << '\n';*/

	//Возведение в нижний регистр(строчные символы)tolower
	/*for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
	std::cout << str << '\n';*/

	//Task1. повторение строки
	/*std::cout << "Enter the string: ";
	getline(std::cin, str);
	std::cout << repeat_str(str, 3) << '\n';*/

	//Task 2. спам
	std::cout << "Enter the massege: \n";
	getline(std::cin, str);
	if (is_spam(str))
		std::cout << "spam detected";
	else
		std::cout << "spam not detected";
	return 0;
}