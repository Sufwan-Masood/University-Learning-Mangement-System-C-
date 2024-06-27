#pragma once

#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int year;
    int month;
    int day;

public:
    // Constructors
    Date();
    Date(int y, int m, int d);

    // Destructor
    ~Date();

    // Getter methods
    int get_year() const;
    int get_month() const;
    int get_day() const;

    // Setter methods
    void set_year(int y);
    void set_month(int m);
    void set_day(int d);

    // Display the date in a generic format
    string to_string() const;
};


