#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int x = 3.9, y = 3.8, z = 0;
	while (x < 6)
	{
		y *= ++x;
		z *= x++ / y--;
		cout << setw(3) << x << setw(3) << y << setw(3) << z << endl;
	}

}