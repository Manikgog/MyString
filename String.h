#ifndef _STRING_H_
#define _STRING_H_

#include <cstring>
#include <iostream>
#include <string>



class String
{
private:
	char* _c_string;


public:
	String(int size);				// конструктор для создания строки произвольного заданного пользователем размера

	String();						// конструктор по умолчанию создаёт строку размером 80 с учётом \0

	String(const char* c_string);	// конструктор для инициализации строки строкой полученной от пользователя

	String(const String& string);	// конструктор копирования

	~String();						// деструктор

	size_t Size();					// метод для возвращения размера строки без учёта \0

	friend std::ostream& operator<<(std::ostream& out, const String& string);

	friend std::istream& operator>>(std::istream& in, String& string);


};


#endif
