#include "String.h"
#include <cstring>  
#include <iostream>  

int String::objectCount = 0;

String::String() : String(80) {}

String::String(int size) : length(size) {
	str = new char[length];
	objectCount++;
}

String::String(const char* input) : String(strlen(input) + 1) {
	strcpy_s(str, length, input);
	str[length - 1] = '\0';
}

String::String(String&& other) 
	: str(other.str), length(other.length) {
	other.str = nullptr; 
	other.length = 0;
	objectCount++;
}

String::~String() {
	delete[] str;
	objectCount--;
}

void String::input() {
	std::cout << "Enter a string: ";

	char buffer[256];
	std::cin >> buffer;
	strncpy_s(str, length, buffer, length - 1);
	str[length - 1] = '\0';
}

void String::display() {
	std::cout << "String: " << str << std::endl;
}

int String::getObjectCount() {
	return objectCount;
}