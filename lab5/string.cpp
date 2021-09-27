#include <iostream>
#include <string>
#include <cstring>

int main () {
	std::string input;
	std::cout << "Enter String" << "\n";
	getline(std::cin, input);

	char * inputArr = new char[input.length() + 1];
	std::strcpy (inputArr, input.c_str());

	char *ptr = inputArr;
	for (int i = 0; i < input.size(); i++) {
		
		std::cout <<*(ptr + i) << "\n";		
	}	
}
