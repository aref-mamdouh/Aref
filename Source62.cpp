#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int arr[4][6], count = 1;
	int sumall = 0, sum_col = 0, sum_row = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			arr[i][j] = count;
			cout << setw(3) << arr[i][j];
			count++;
			sumall += arr[i][j];
		}
		cout << endl;
	}
	cout << "sum of all the numbers in the array is " << sumall << endl;
	cout << endl;

	for (int j = 0; j < 6; j++) {
		sum_col = 0;
		for (int i = 0; i < 4; i++) {
			sum_col += arr[i][j];
		}
		cout << "sum of numbers in column #" << j + 1 << " is " << sum_col << endl;
	}

	cout << endl;

	for (int i = 0; i < 4; i++) {
		sum_row = 0;
		for (int j = 0; j < 6; j++) {
			sum_row += arr[i][j];
		}
		cout << "sum of numbers in row #" << i + 1 << " is " << sum_row << endl;
	}

}