#pragma once

#include <string>
#include "Date.h"
#include "vector"
#include <fstream>
#include <sstream>
using namespace std;

class Event {
private:
    int event_id;
    string title;
    string description;
    Date date;
    string venue;

public:
    // Constructors
    Event();
    Event(int eventId, const string& title, const string& description, const Date& date, const string& venue);

    // Destructor
    ~Event();

    // Getter methods
    int get_event_id() const;
    string get_title() const;
    string get_description() const;
    Date get_date() const;
    string get_venue() const;

    // Setter methods
    void set_event_id(int eventId);
    void set_title(const string& title);
    void set_description(const string& description);
    void set_date(const Date& date);
    void set_venue(const string& venue);

    static  void write_event_data_to_csv(Event& eve, const string& filename);
    void display_event_info();
    void check_event();

    void  event_menu();
};



