#include "String.h"
#include <iostream>

int main()
{
	String str1;
	String str2(50);
	String str3("Hello, World!");

	str1.input();
	str1.display();

	str2.input();
	str2.display();

	str3.display();
	std::cout << "Total String objects created: " << String::getObjectCount() << std::endl;

	String str4(std::move(str3));
	str4.display();
	std::cout << "Total String objects after move: " << String::getObjectCount() << std::endl;
	str3.display();
	std::cout << "Total String objects after move: " << String::getObjectCount() << std::endl;

	str1.display();
	str2.display();
	std::cout << "Total String objects at the end: " << String::getObjectCount() << std::endl;
}