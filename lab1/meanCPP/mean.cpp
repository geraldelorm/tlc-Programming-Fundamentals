#include <iostream>

int main ()
{
	int num1, num2, num3, num4, num5;
	double total, mean, mode, median;

	std::cout << "Enter 5 integers: ";
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

		total = num1 + num2 + num3 + num4 + num5;
	        mean = total/5;

		std::cout << mean;
	

}
