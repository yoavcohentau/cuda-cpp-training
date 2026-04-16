#include "date.h"
#include <iostream>

using namespace std;


Date::Date(int dd, int mm, int yy){
    init(dd, mm, yy);
}

void Date::init(int dd, int mm, int yy){
    day = dd;
    month = mm;
    year = yy;
}

void Date::addDay(){
    if (month == 2 && day == 28){ //in that case we should pass to the next month
		day = 1;
		month++;
	}
	else if (((month == 4 || month == 6 || month == 9 || month == 11) && day == 30)){ //in that case we should pass to the next month
		day = 1;
		month++;
	}
	else if (((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31)){ //in that case we should pass to the next month
		day = 1;
		month++;
	}
	else if (month == 12 && day == 31){ //in that case we should pass to the next year
		day = 1;
		month = 1;
		year++;
	}
	else //else - just add one day
		day++;
}

Date Date::operator ++ (){
    addDay();
    return *this;
}

Date Date::operator ++ (int notused){
    addDay();
    return *this;
}

Date Date::operator += (int n){
    for (int i=0; i<n; i++)
        addDay();
    return *this;
}

Date::operator int* () const{
    int* time_array = new int[3] {day, month, year};
    return time_array;
}


int Date::getDay() const{
    return day;
}
int Date::getMonth() const{
    return month;
}
int Date::getYear() const{
    return year;
}

void Date::printDate() const{
    std::cout << day << "/" << month << "/" << year << endl;
}
