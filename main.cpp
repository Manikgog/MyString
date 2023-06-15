#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include "String.h"

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // установка кодовой страницы на ввод текста
	/*String str1;
	std::cin >> str1;
	String str2(str1);
	std::cout << str1;
	std::cout << '\n' << "str1 size без учёта \'\\0\' - " << str1.Size() << std::endl;
	std::cout << std::endl;*/

	String str3;
	std::cin >> str3;
	std::cout << str3;

	return 0;
}
