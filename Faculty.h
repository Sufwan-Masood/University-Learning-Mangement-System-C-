#pragma once
#include "Course.h"
#include"Student.h"
#include <string>
using namespace std;
class Faculty {
private:
    int faculty_id;
    string name;
    string email;
    string phone_number;
    vector<Course>course_taught;
    vector<Student>supervised_students;

public:
    // Constructors
    Faculty();
    Faculty(int id, const string& n, const string& email, const string& phone);

    // Destructor
    ~Faculty();

    // Getter methods
    int get_faculty_id() const;
    string get_name() const;
    string get_email() const;
    string get_phone_number() const;
    vector<Course> get_course_taught()  {
        return course_taught;
    }

    // Getter for supervised_students
    vector<Student> get_supervised_students()  {
        return supervised_students;
    }

    // Setter methods
    void set_faculty_id(int id);
    void set_name(const string& n);
    void set_email(const string& email);
    void set_phone_number(const string& phone);

    //functions
    void teach_course(const Course& cor);
    void supervise_project(const Student& stu);
    static  void write_faculty_data_to_csv(Faculty& faculty, const string& filename);


    void display_Faculty_details();
    void checkFACULTY();
    void Faculty_menu();


};
