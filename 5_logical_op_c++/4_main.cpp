/*
A-> v.good
B-> good
C-> avg
D-> bad
E-> v.bad
F-> fail
*/

#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream myFile ("input.txt");
    if (!myFile) {
        cout << "unable to open file input.txt" <<endl;
    }

	char grade;
	myFile >> grade;

	// if (grade == 'A') {
	// 	cout << "v.good" << endl;
	// }
	// else if (grade == 'B') {
	// 	cout << "good" << endl;
	// }
	// else if (grade == 'C') {
	// 	cout << "avg" << endl;
	// }
	// else if (grade == 'D') {
	// 	cout << "bad" << endl;
	// }
	// else if (grade == 'E') {
	// 	cout << "v.bad" << endl;
	// }
	// else if (grade == 'f') {
	// 	cout << "fail" << endl;
	// }
	// else {
	// 	cout << "invalid grade" << endl;
	// }

	switch (grade) { //[char / int can be switched]
	case 'A' : cout << "v.good" << endl; break;
	case 'B': cout << "good" << endl; break;
	case 'C': cout << "avg" << endl; break;
	case 'D': cout << "bad" << endl; break;
	case 'E': cout << "v.bad" << endl; break;
	case 'F': cout << "fail" << endl; break;
	default: cout << "invalid grade" << endl;
	}


	return 0;

}