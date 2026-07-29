#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myFile("input.txt");
    if (!myFile) {
        cout << "Unable to open file input.txt" << endl;
         // terminate with error
    }

	int x;
	myFile >> x;
	cout << x << endl;

	char ch;
	myFile >> ch;
	cout << ch << endl;

	double y;
	myFile >> y;
	cout << y << endl;


	return 0;
}