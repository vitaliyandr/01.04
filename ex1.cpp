#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    }
    else if (year % 100 != 0) {
        return true;
    }
    else if (year % 400 != 0) {
        return false;
    }
    else {
        return true;
    }
}

int daysInMonth(int month, int year) {
    switch (month) {
    case 2:
        if (isLeapYear(year)) {
            return 29;
        }
        else {
            return 28;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        return 31;
    }
}

int daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) {
    int days = 0;
    while (year1 < year2 || month1 < month2 || day1 < day2) {
        days++;
        day1++;
        if (day1 > daysInMonth(month1, year1)) {
            day1 = 1;
            month1++;
        }
        if (month1 > 12) {
            month1 = 1;
            year1++;
        }
    }
    return days;
}

int main() {
    int day1, month1, year1, day2, month2, year2;
    cout << "Enter first date (dd mm yyyy): ";
    cin >> day1 >> month1 >> year1;
    cout << "Enter second date (dd mm yyyy): ";
    cin >> day2 >> month2 >> year2;
    int days = daysBetweenDates(day1, month1, year1, day2, month2, year2);
    cout << "Number of days between dates: " << days << endl;
    return 0;
}
