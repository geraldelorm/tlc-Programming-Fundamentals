#include <iostream>

int main() {
	int input;
	std::cout << "Enter Integer: ";
	std::cin >> input;

	if (input % 2 == 0) {
		for ( int i = 1; i < 21; i++) {
			std::cout << i << " x " << input << " = " <<  i * input << "\n";
		}

	} else if (input % 2 != 0) {
		int count = 0;
		for ( int j = 1; j < 50 ; j++) {
			
			if (count < 30) {
				if (j % input != 0) {

					std::cout << j  << "\n";
					count++;
				}
			}
		}
	}
}
