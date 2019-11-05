/**************************************************************************************************************
@ Assignment question number 7
@ Author : Aref Mamdouh 
@ Creation date : 31 Oct 2019
@ Last update : 31 Oct 2019
****************************************************************************************************************/

#include <iostream>

using namespace std;

int main() {
	string salesman[10];
	int sales[10][5], past5[5], highest[10] = { 0,0,0,0,0,0,0,0,0,0 }, max = 0, index, lowest[10], min, sum[10] = { 0,0,0,0,0,0,0,0,0,0 }, sumall = 0, indexj[10];
	double avg[10], diff[10][5], avgall;

	//Step one : take 5 sales amounts for each of 10 salesmen 
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "please enter sales amount #" << j + 1 << " for salesman #" << i + 1 << ": ";
			cin >> sales[i][j];
		}
	}
	//Step two: take names of each of 10 salesmen
	for (int i = 0; i < 10; i++) {
		cout << "please enter the name of slaesman #" << i + 1 << ": "; 
		cin >> salesman[i]; 
	}
	//Step three: take the past 5 years
	for (int j = 0; j < 5; j++) {
		cout << "please enter the past 5 years in ascending order: ";
		cin >> past5[j];

		for (int c = 1; c < 5; c++) {
			for (int d = 0; d < (5 - c); d++) {
				int temp;

				if (past5[d + 1] < past5[d]) {
					int temp;
					temp = past5[d];
					past5[d] = past5[d + 1];
					past5[d + 1] = temp;
				}
			}
		}
	}
	//step Four: Display saleman’s name and year of the highest achieved sales amount together with such sales amount.
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			if (sales[i][j] > highest[i]) {
				highest[i] = sales[i][j];
				indexj[i] = j;
			}
		}
		
		if (highest[i] > max) {
			max = highest[i];
			index = indexj[i];
		}
	}

	cout << "the salesman with highest acheived sales is " << salesman[index] << " in the year " << past5[index] << " with sales amount " << max << endl;
	cout << endl;

	// step Five: Display saleman’s name and year of the lowest achieved sales amount together with such sales amount.
	for (int i = 0; i < 10; i++) {
		lowest[i] = sales[i][1];
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			if (sales[i][j] < lowest[i]) {
				lowest[i] = sales[i][j];
				indexj[i] = j;
			}
		}
		
		min = lowest[1];

		if (lowest[i] < min) {
			min = lowest[i];
			index = indexj[i];
		}
	}

	cout << "the salesman with lowest acheived sales is " << salesman[index] << " in the year " << past5[index] << " with sales amount " << min << endl;
	cout << endl;

	// step Six: Average sales amount of each salesman in the five years.
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			sum[i] += sales[i][j];
		}

		avg[i] = sum[i] / 5.0;

		cout << "the average for salesman number " << i+1 << " is " << avg[i] << endl;
	}

	cout << endl;

	// Step seven: The difference between average sales amount of each salesman and his/her computed average sales amount.
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			diff[i][j] = sales[i][j] - avg[i];

			cout << "the difference between salesman's #" << i + 1 << "sales amount for year #" << j + 1 << " and the average is " << diff[i][j] << endl;
		}
	}

	cout << endl;


	//step Eight: get the average salesamount of all salesmen in all years
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			sumall = sumall + sum[i];
		}
	}

	avgall = sumall / 50.0;
	cout << "the average salesamount of all salesmen in all years is " << avgall;
}