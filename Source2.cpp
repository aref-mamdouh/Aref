#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	int fib[80] = { 0,1 };

	cout << "please enter a value between 40 and 80 inclusive: ";
	cin >> n;

	while (n < 40 || n > 80) {
		cout << "invalid please reenter: ";
		cin >> n;
	}

	cout << setw(3) << fib[1];

	for (int c = 2; c < 80; c++) {
		fib[c] = fib[c - 1] + fib[c - 2];
		if (fib[c] > n)
			break;
		else
			cout << setw(3) << fib[c];
	}
}