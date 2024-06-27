#pragma once

#include <iostream>
#include <vector>
#include "Assignment.h"
//#include "Student.h"



using namespace std;
class Course {
private:
    int course_id;
    string name;
    int credits;
    string instructor;
    //vector <Student>enrolled_students; // also make getters for these
    vector <Assignment>_assignments;    // and for this
public:
    // Constructors
    Course();
    Course(int id, const string& n, int cr, const string& instructor);
    Course(const Course& c1);

    // Destructor
    ~Course();

    // Getter methods
    int get_course_id() const;
    string get_name() const;
    int get_credits() const;
    string get_instructor() const;
    vector<Assignment> get_assignments();


    // Setter methods
    void set_course_id(int id);
    void set_name(const string& n);
    void set_credits(int cr);
    void set_instructor(const string& instructor);

    //functions
    void add_assignment(const Assignment& assign);
    static void write_course_data_to_csv(Course& course, const std::string& filename);

    void display_course_details();
    void checkCOURSE();
    void Course_menu();

   
};

