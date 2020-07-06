#include<iostream>
using namespace std;

class Date {

	int day, month, year;
public:
	Date() {
		day = 0;
		month = 0;
		year = 0;
	}

	Date(int d, int m, int y) {
		if (d > 0 && d <= 31) {
			day = d;
		}
		if (m > 0 && m <= 12) {
			month = m;
		}
		if (y > 0)
			year = y;
	}

	void setDay(int d) {
		if (d > 0 && d <= 31) {
			day = d;
		}
	}
	void setMonth(int m) {
		if (m > 0 && m <= 12) {
			month = m;
		}
	}
	void setYear(int y) {
		if (y > 0) {
			year = y;
		}
	}

	int getDay()const {
		return day;
	}
	int getMonth()const {
		return month;
	}
	int getYear()const {
		return year;
	}

	void Display() {
		cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
	}
};