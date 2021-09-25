#include <iostream>
#include <string>

using namespace std;

int main () {
	cout << "Enter word: ";
	string input;
	cin >> input;

	//just to make this work on the last word--lol--
	input = input + "-";

	string word = "";
	int count = 0;
	
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '-') {
			cout << "[" << count << "] " << word;
			cout << "\n";
			word = "";
			count = 0;
		} else {

			word = word + input[i];
			count++;
		}
	}

}
