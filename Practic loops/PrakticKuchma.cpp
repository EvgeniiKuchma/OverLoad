#include<iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	/*std::cout << "\nВведите размер окна l: \n";
	int  l;
	std::cin >> l;
	std::cout << "\nВведите размер окна h: \n";
	int  h;
	std::cin >> h;
	if (h % 2 == 0 || l % 2 == 0 || l < 5 || h < 5)
		std::cout << "Input errors";
	else
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++){
			if (j == 0 || i == 0 || i == h - 1 || j == l - 1)
				std::cout << "# ";
			else
				if (i == (h - 1) / 2 || j == (l - 1) / 2)
					std::cout << "* ";
					else
					std::cout << "  ";
		}
		std::cout << "\n";
		}*/
	int n,m, max;
	std::cout << "ВВедите кол во жильцов: \n";
	std::cin >> n;
	std::cout << "ВВедите возраст 1го жильца: \n";
	std::cin >>max;
	for (int i = 1; i < n; i++){
		std::cout << "введите возраст"<<i+1<< "жителя";
	std::cin >> m;
	if (m > max)
		max = m;
}
	std::cout << "Cамый старый " << max;
	return 0;
		}