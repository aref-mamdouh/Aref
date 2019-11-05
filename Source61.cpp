#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int arr[4][6], count = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			arr[i][j] = count;
			cout << setw(3) << arr[i][j];
			count++;
		}
		cout << endl;
	}
}