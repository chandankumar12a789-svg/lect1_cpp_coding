#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream myFile ("input.txt");
if (!myFile) {
cout << "unable to open file input.txt" << endl;
}

	int n;
	myFile >> n;

	int i = 1 ;

	while (i <= n) {
		cout << i << " ";
		i = i + 1;
	}
	cout << endl << "you are ouitside the while loop" ;

	return 0;
}