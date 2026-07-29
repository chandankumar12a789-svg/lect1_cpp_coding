#include<iostream>

using namespace std;

int main() {

	cout << " true && true = " << (true and true) << endl;
	cout << " true && false = " << (true and false) << endl;
	cout << " false && true = " << (false and true) << endl;
	cout << " false && false = " << (false and false) << endl;

	cout << endl;

	cout << " true || false = " << (true || true) << endl;
	cout << " true || false = " << (true || false) << endl;
	cout << " false or true = " << (false or true) << endl;
	cout << " false or false = " << (false or false) << endl;

	cout << endl;

	cout << "!true = " << (!true) << endl;
	cout << " !false = " << (!false) << endl;



	int x = 10 , y = 0 ;
	cout << (x and y) << endl; // (true and false)
	cout << (x or y) << endl; // (true or false)
	cout << (-10 and 5) << endl; // (true and true)

	return 0;
}
// TRUE(nonzero)
// FALSE(0)