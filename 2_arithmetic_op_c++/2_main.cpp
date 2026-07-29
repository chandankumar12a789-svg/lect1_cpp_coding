//given the value of principal,rate and time, write a program to find si
// #include<iostream>

// using namespace std;

// int main() {

// 	int p;
// 	cin >> p;

// 	int r;
// 	cin >> r;

// 	int t;
// 	cin >> t;

// 	int si;
// 	si = p * r * t / 100;
// 	cout << si;

// 	return 0;
// }



//or



// #include<iostream>

// using namespace std;

// int main() {

// 	int P, R, T;
// 	cin >> P >> R >> T;
// 	float SI = ((float)P * R * T) / 100;
// 	cout << SI << endl;


// 	return 0;
// }


// OR


#include<iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream myFile("input.txt");
	if (!myFile) {
		cout << "Unable to open file input.txt" << endl;
		
	}

	int p;
	myFile >> p;

	int r;
	myFile >> r;

	int t;
	myFile >> t;

	cout << p*r*t / 100 << endl;
	cout << (p * r * t) / 100 << endl;
	cout << (p * r * t) / 100.0 << endl;
	cout << ((float)p * r * t) / 100 << endl;

	// float si = (float)p * r * t / 100;
	// cout << si << endl;

	float si = p * r * t / 100.0;
	cout << si << endl;

	cout << "si = " << p*r*t / 100.0;

	return 0;
}