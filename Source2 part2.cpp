#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int birth_date;
	int DD;
	int MM;
	int YYYY;
	string month;

	cout << "please enter an 8 digit in number in the form DDMMYYYY to represent your birthdate: ";
	cin >> birth_date;

	YYYY = birth_date % 10000;
	birth_date = birth_date / 10000;
	MM = birth_date % 100;
	birth_date = birth_date / 100;
	DD = birth_date % 100;

	if (MM == 1)
		month = "January";
	else if (MM == 2)
			month = "Febuary";
		else if (MM == 3)
				month = "March";
			else if (MM == 4)
					month = "April";
				else if (MM == 5)
						month = "May";
					else if (MM == 6)
							month = "June";
						else if (MM == 7)
								month = "July";
							else if (MM == 8)
									month = "August";
								else if (MM == 9)
										month = "September";
									else if (MM == 10)
											month = "October";
										else if (MM == 11)
												month = "November";
											else if (MM == 12)
													month = "December";
												else
													month = "invalid month";

	cout << "I was born on " << DD << " of " << month << " " << YYYY;
}