#include "Date.h"
#include <string>
using namespace std;
// Default constructor
Date::Date() : year(0), month(0), day(0) {}

// Parameterized constructor
Date::Date(int y, int m, int d) : year(y), month(m), day(d) {}

// Destructor
Date::~Date() {}

// Getter methods
int Date::get_year() const {
    return year;
}

int Date::get_month() const {
    return month;
}

int Date::get_day() const {
    return day;
}

// Setter methods
void Date::set_year(int y) {
    year = y;
}

void Date::set_month(int m) {
    month = m;
}

void Date::set_day(int d) {
    day = d;
}

string Date::to_string() const {
    return std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day);
    // not a recurrsive funcion 
    // it is calling std library function inside user defined function 
    // both have same name
}


