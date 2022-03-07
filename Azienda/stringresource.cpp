#include "main.h"

void strwrite(std::fstream& file,std::string input)
{
	size_t lenstr=0;
	lenstr = input.length();
	file.write((char*)&lenstr, sizeof(size_t));
	file << input;
}

std::string stread(std::fstream& file)
{
	std::string output;
	size_t a = 0;
	file.read((char*)&a, sizeof(size_t));

	std::vector<char> chars(a);
	file.read(chars.data(), a);
	
	output.assign(chars.data(), a);
	return output;
}