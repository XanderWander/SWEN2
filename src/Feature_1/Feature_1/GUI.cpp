#include "GUI.h"

#include <string>
#include <iostream>
#include <sstream>

GUI::GUI()
{
}

GUI::~GUI()
{

}

void GUI::setArray()
{
	std::string name;
	std::cout << "insert the Amount of numbers\n";
	std::getline(std::cin, name);
	Amount = std::stoi(name);
	for (int i = 1; i <= Amount; i++) {
		std::cout << "number " << i << ":";
		std::getline(std::cin, name);
		array[i] = std::stoi(name);
	}
}

void GUI::getArray()
{
	std::cout << "Array: \n";
	for (int i = 1; i <= Amount; i++) {
		std::cout << array[i] <<" ";
	}
}
