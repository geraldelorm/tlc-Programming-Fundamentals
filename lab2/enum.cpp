#include <iostream>
#include <string>

int main() {
	enum items {RED, YELLOW, AMBER=YELLOW, GREEN}; 
	

	std::cout << "RED: " << items{RED} << "\n";
	std::cout << "YELLOW: " << items{YELLOW} << "\n";
	std::cout << "AMBER: " << items{AMBER} << "\n";

}
