 /* #include<iostream>
 #include<fstream>

 using namespace std;

 int main() {
 ifstream myFile ("input.txt");
 if (!myFile) {
 cout << "unable to open file input.txt" <<endl;
}

 	int age;
	 	myFile >> age;

 	if (age >= 18)  {
 		cout << "you can vote " << endl;
 	}
 	cout << "you are outside if block" << endl;

 	return 0;
 } */


#include<iostream>
#include<fstream>

using namespace std;

int main() {
ifstream myFile ("input.txt");
if (!myFile) {
    cout << "unable to open file input.txt" <<endl;
}

	int age;
	myFile>> age ;

	if (age >= 18) {
		cout << "you can vote" << endl;
	}
	else {
		cout << " you cannot vote" << endl;
	}

	cout << " you are outside if block" << endl;
	return 0;
} 