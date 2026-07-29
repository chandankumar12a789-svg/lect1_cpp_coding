// given three numbers , design an algorithm to find the larger no.

#include<iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream myFile("input.txt");
	if (!myFile) {
		cout << "Unable to open file input.txt" << endl;
	}

	int x, y, z;
	myFile >> x >> y >> z;

	if ((x > y) and (x > z)) {
		cout << x << endl;
	}
	else if (y > z) {
		cout << y << endl;
	}
	else {
		cout << z << endl;
	}

	return 0;
}