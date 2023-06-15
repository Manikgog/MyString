#include "String.h"

String::String(int size) : _c_string(new char[size] {})
{
	std::cout << "Конструктор co строкой произвольного размера " << this << std::endl;
}

String::String() : _c_string(new char[80] {})
{
	std::cout << "Конструктор по умолчанию с длиной строки 80 символов " << this << std::endl;
}

String::String(const char* c_string) : _c_string{ new char[strlen(c_string) + 1] {} }
{
	strcpy_s(_c_string, strlen(c_string) + 1, c_string);
	std::cout << "Конструктор с параметрами " << this << std::endl;
}

String::String(const String& string) : _c_string(new char[strlen(string._c_string) + 1] {})
{
	strcpy_s(_c_string, strlen(string._c_string) + 1, string._c_string);
	std::cout << "Конструктор копирования " << this << std::endl;
}

String::~String()
{
	if (_c_string)
		delete[] _c_string;
	std::cout << "Деструктор " << this << std::endl;
}

size_t String::Size()
{
	return strlen(_c_string);
}

std::ostream& operator<<(std::ostream& out, const String& string)
{
	out << string._c_string;
	return out;
}

std::istream& operator>>(std::istream& in, String& string)
{
	std::string str;
	std::getline(in, str);
	if (string._c_string)
		delete[] string._c_string;
	string._c_string = new char[str.length() + 1] {};
	for (size_t i = 0; i < strlen(string._c_string) + 1; ++i)
	{
		string._c_string[i] = str[i];
	}
	return in;
}