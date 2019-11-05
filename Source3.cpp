#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n, temp[24], max = 0, min = 45, less_avg = 0, sum = 0;
	double count = 0.0, avg;

	cout << "please enter the amount of readings between 10 and 24 inclusive: ";
	cin >> n;

	while (n < 10 || n > 24) {
		cout << "please reenter, invalid number: ";
		cin >> n;
	}

	for (int i = 0; i < n; i++) {
		cout << "please enter temp #" << i + 1 << " between -5 and 45 inclusive: ";
		cin >> temp[i];

		while (temp[i] < -5 || temp[i] > 45) {
			cout << "please reenter temp #" << i + 1 << ", invalid number: ";
			cin >> temp[i];
		}

		if (temp[i] < min)
			min = temp[i];
		else if (temp[i] > max)
			max = temp[i];

		count++;
		sum += temp[i];
	}

	avg = sum / count;

	for (int k = 0; k < n; k++) {
		if (temp[k] < avg)
			less_avg++;
	}
	cout << "the average temperature is: " << setw(3) << avg << endl;
	cout << "the maximum temperature is: " << setw(3) << max << endl;
	cout << "the minimum temperature is: " << setw(3) << min << endl;
	cout << "the number of temperatures below the average is: " << setw(3) << less_avg << endl;
}