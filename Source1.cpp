#include <iostream>

using namespace std;

int validate(int num);
void convert(int num);

int main() {
	int num;

		cout << "please enter a number between 0 and 99 to convert to decimal: ";
		cin >> num;

		convert(validate(num));
}
int validate(int num) {

	cout << "please enter a number between 0 and 99 to convert to decimal: ";
	cin >> num;

	while (num < 0 || num>99) {
		cout << "invalid number please reenter: ";
			cin >> num;
	}
	return num;
}
void convert(int num) {
	int d[10], i = 0, max = 0;
	while(num != 0) {
		d[i] = num % 2;
		if (i > max)
			max = i;
		num = num / 2;
		i++;
	}

	while (max >= 0) {
		cout << d[max];
		max--;
	}
}