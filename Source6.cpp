#include <iostream>

using namespace std;

int main() {
	int num, sum = 0, max, min, count0 = 0, dummy;
	cout << "please enter a digit between 999 and 9999999: ";
	cin >> num;

	while (num < 999 || num > 9999999) {
		cout << "invalid number, please reenter a digit between 999 and 9999999: ";
		cin >> num;
	}
	max = num % 10;
	min = num % 10;
	while (num > 0) {
		dummy = num % 10;
		num = num / 10;
		//chack if dummy is 0
		if (dummy == 0) {
			count0++;
		}
		//evaluate max and min
		if (dummy < min) {
			min = dummy;
		}
		else if (dummy > max) {
			max = dummy;
		}
		sum = sum + dummy;
	}
	cout << "the sum of digits is: " << sum << "\nthe largest digit is: " << max << "\nthe smallest digit is: " << min << "\nthe number of 0 digits is: " << count0 << endl;
}