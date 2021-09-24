#include <iostream>
#include <string>

int main () {
	std::cout << "Enter line: " << "\n";
	std::string input;
	std::cin >> input;

	for (int i = 0; i < input.size(); i++) {
		int count = 0;
		std::string word = "";
		
		if ( input[i] != "-") {
			word = word + input[i];
			std::cout << count << " " << word ;
		} else {
			count = 0;
			continue;
		}		
		count++

	} 
}
