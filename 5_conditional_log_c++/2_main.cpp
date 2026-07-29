#include<iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream myFile("input.txt");
	if (!myFile) {
		cout << "Unable to open file input.txt" << endl;
	}

	int n;
	myFile >> n;
	if ( n > 0 ) {
		cout << "positive" << endl;
	}
	else if ( n < 0 ) {
		cout << "negative" << endl;
	}
	else  {
		cout << "zero" << endl;
	}
	cout << "you are outside if-else-if block" << endl;
	return 0;
}