#include <iostream>

using namespace std;

int main() {
	char arr[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == i)
				cout << 'A';
			else
				cout << ' ';
		}
		cout << endl;
	}
}