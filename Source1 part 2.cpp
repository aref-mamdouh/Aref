#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	char grade;
	double gpa;

	cout << "please enter your letter grade: ";
	cin >> grade;

	if (grade == 'a' || grade == 'A' || grade == 'b' || grade == 'B' || grade == 'c' || grade == 'C' || grade == 'd' || grade == 'D' || grade == 'f' || grade == 'F') {
		switch (grade) {
		case 'a':
		case 'A':
			gpa = 4;
			break;
		case 'b':
		case 'B':
			gpa = 3;
			break;
		case 'c':
		case 'C':
			gpa = 2;
			break;
		case 'd':
		case 'D':
			gpa = 1;
			break;
		case 'f':
		case 'F':
			gpa = 0;
			break;
		}
		cout << " your GPA is: " << fixed << setprecision(1) << gpa;
	}
	else {
		cout << "you have entered and invalid letter grade";
	}
	return 0;
}