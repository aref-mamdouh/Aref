#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
	string name[30], temp;
	int n, gpa[30], id[30], temp1, temp2;

	cout << "please enter the amount of student between 10 and 30 incluive: ";
	cin >> n;

	while (n < 10 || n>30) {
		cout << "please reenter, invalid input: ";
		cin >> n;
	}

	for (int i = 0; i < n; i++) {
		cout << "enter name #" << i + 1 << ": ";
		cin >> name[i];
		cout << "enter id #" << i + 1 << ": ";
		cin >> id[i];
		cout << "enter gpa #" << i + 1 << ": ";
		cin >> gpa[i];
	}

	for (int m = 1; m < n; m++) {
		for (int k = 0; k < (n-m); k++)
			if (name[k + 1] < name[k]) {
				temp = name[k];
				temp1 = gpa[k];
				temp2 = id[k];

				gpa[k] = gpa[k+1];
				id[k] = id[k+1];
				name[k] = name[k + 1];

				gpa[k+1] = temp1;
				id[k+1] = temp2;
				name[k + 1] = temp;
			}
	}
	for (int c = 0; c < n; c++)
		cout << setw(3) << name[c] << setw(3) << id[c] << setw(3) << gpa[c] << endl;
}