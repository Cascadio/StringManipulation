// StringManipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "string_manipulation.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>

int main()
{
	std::cout << "This program allows testing of string manipulation functions in C++ with your own customizable test cases." << std::endl;
	string test_1 = "Anti,dise,stas,hbli,shme,nta,ria,nism";
	string result = string_manipulation::slice(test_1, 10, 13);
	string_manipulation::print(result);
	string_manipulation::print(string_manipulation::split(test_1, ','));
}