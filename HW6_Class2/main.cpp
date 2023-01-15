#include <iostream>
#include <string>
#include "Library.h"

//1. ƒва способа создать конструктор по умолчанию :
//	1 - й способ - Box() {}
//	2 - й способ - Box() { this->_pages = 316; }
//
//2. —пособ удалить конструктор по умолчанию
//	Box() = = delete;
//
//3. ќбъ€вление и определение дл€ operator[] дл€ доступа к элементам пол€ std::string по индексу
//	Book(const std::string & title) :_title(title) {}
//	const char operator[](int index) {
//		return _title[index];
//	}
//
//4. ќбъ€вление и определение дл€ любого константного метода
//	const std::string & getTitle()const {
//		return _title;



int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "«адача 5." << std::endl;
	return 0;
	}









