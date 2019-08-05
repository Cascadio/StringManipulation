#include "pch.h"
#include "string_manipulation.h"

string_manipulation::string_manipulation()
{
}

vector<int> string_manipulation::vec_stoi(const vector<string>& input)
{
	vector<int> output;
	for (vector<string>::const_iterator str_iter = input.begin(); str_iter != input.end(); str_iter++) {
		output.push_back(stoi(*str_iter));
	}
	return output;
}

string string_manipulation::slice(string line, unsigned int i_1, unsigned int i_2)
{
		string output;
		for (unsigned int i = i_1; i <= i_2; i++) {
			output.push_back(line[i]);
		}
		return output;
}

vector<string> string_manipulation::split(const string& line, char seperator) {
	stringstream ss(line); vector<string> output;
	while (ss.good())
	{
		string substr;
		// Get substring before seperator and add it to output.
		getline(ss, substr, seperator); output.push_back(substr);
	}
	return output;
}

void string_manipulation::print(const string& line) {
	for (string::const_iterator str_iter = line.begin(); str_iter != line.end(); str_iter++) {
		std::cout << *str_iter;
	}
	std::cout << endl;
}

void string_manipulation::print(const vector<string>& input) 
{
	for (vector<string>::const_iterator str_iter = input.begin(); str_iter != input.end(); str_iter++) {
		std::cout << *str_iter << endl;
	}
}


string_manipulation::~string_manipulation()
{
}
