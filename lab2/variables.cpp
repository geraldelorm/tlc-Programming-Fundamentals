#include <iostream>

int main () {
	int intNum;
	int *intNumPtr = &intNum;
	int &intNumRfr = intNum ;
	const int intConst = 20;

	intNum = 5;
	std::cout << "Integer: " << intNum << "\n";

	*intNumPtr += 1;
	std::cout <<"Changed with pointer: " << intNum << "\n";

	intNumRfr++;
	std::cout << "Changed with reference: " << intNum << "\n";
	
	//intConst++;
	
	int hex = 0xf3f2;
	int character = 'a';
	int oct = 0437;

	std::cout << "Hex: " << hex << "\n";
	std::cout << "Char: " << character << "\n";
	std::cout << "Oct: " << oct << "\n";

}
