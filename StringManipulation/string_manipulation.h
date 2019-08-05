#pragma once

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
using namespace std;
class string_manipulation
{
private:
public:
	static vector<int> vec_stoi(const vector<string>& input);
	static string slice(string line, unsigned int i_1, unsigned int i_2);
	static vector<string> split(const string& line, char seperator);
	static void print(const string& line);
	static void print(const vector<string>& input);
	string_manipulation();
	~string_manipulation();
};