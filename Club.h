#pragma once
#include <string>
#include"Event.h"
#include <vector>
using namespace std;

class Club {
private:
    int club_id;
    string name;
    string description;
  /*  vector <Student>members;*/
    vector <Event> events_organized ;
public:
    // Constructors
    Club();
    Club(int id, const string& n, const string& desc);

    // Destructor
    ~Club();

    // Getter methods
    int get_club_id() const;
    string get_name() const;
    string get_description() const;

    // Setter methods
    void set_club_id(int id);
    void set_name(const string& n);
    void set_description(const string& desc);

    //functions
    void organize_event(const Event& eve);
   
    static  void write_club_data_to_csv(Club& club, const string& filename);


    void display_Club_details();
    void checkCLUB();
    void Club_menu();

};


