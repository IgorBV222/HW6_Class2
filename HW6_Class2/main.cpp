#include <iostream>
#include <string>
#include "Library.h"

//1. ��� ������� ������� ����������� �� ��������� :
//	1 - � ������ - Box() {}
//	2 - � ������ - Box() { this->_pages = 316; }
//
//2. ������ ������� ����������� �� ���������
//	Box() = = delete;
//
//3. ���������� � ����������� ��� operator[] ��� ������� � ��������� ���� std::string �� �������
//	Book(const std::string & title) :_title(title) {}
//	const char operator[](int index) {
//		return _title[index];
//	}
//
//4. ���������� � ����������� ��� ������ ������������ ������
//	const std::string & getTitle()const {
//		return _title;



int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "������ 5." << std::endl;
	return 0;
	}









