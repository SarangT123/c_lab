#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

int days_in_month(int m, int leapYear) {
	if(m == 2){
		if (leapYear) {
			return 29;
		}
		else {
			return 28;
		}
	}
	if (m < 8) {
		if (m % 2 == 0) {
			return 30;
		}
		else {
			return 31;
		}
	}
	else {
		if (m % 2 != 0) {
			return 30;
		}
		else {
			return 31;
		}
	}
}

int IsLeapYear(int y){
	if (y % 4 == 0 && (y%100 != 0 || y%400 == 0)){
        return 1;
    }
    return 0;
}

int main() {
	struct date today = { 29,2,2000 };
	int isLeapYear = IsLeapYear(today.year);
	int days_in_this_month = days_in_month(today.month, isLeapYear);

	struct date nextDay;

	if (today.day > days_in_this_month) {
		printf("The date given invalid\n");
		return 1;
	}
	if (today.month > 12) {
		printf("The date given invalid\n");
		return 1;
	}
	
	if (today.day + 1 <= days_in_this_month){
		nextDay.day = today.day + 1;
		nextDay.month = today.month;
		nextDay.year = today.year;
	}
	else {
		nextDay.day = 1;
		if (today.month + 1 > 12) {
			nextDay.month = 1;
			nextDay.year = today.year + 1;
		}
		else {
			nextDay.month = today.month + 1;
			nextDay.year = today.year;
		}
	}

	printf("The next day is: %d - %d - %d", nextDay.day, nextDay.month, nextDay.year);

	return 0;
}

