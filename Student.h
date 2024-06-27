#pragma once
#include <iostream>
#include <vector>
#include"Course.h"
#include"Assignment.h"
#include "Club.h"
#include<fstream>
using namespace std;
class Student {
private:
    int student_id;
    string name;
    string email;
    string phone_number;
    // 
    vector <Course>enrolled_courses;
    vector <Assignment>submitted_assignments;
    vector <Club>joined_clubs;
    
public:
    

    // Constructors
    Student();
    Student(int id, const string& n, const string& email, const string& phone);

    // Destructor
    ~Student();

    // Getter methods
    int get_student_id() const;
    string get_name() const;
    string get_email() const;
    string get_phone_number() const;
    vector<Course> get_enrolled_courses();
    vector<Assignment> get_submitted_assignments();
    vector<Club>get_joined_clubs();

    // Setter methods
    void set_student_id(int id);
    void set_name(const string& n);
    void set_email(const string& email);
    void set_phone_number(const string& phone);

    // functions
    void enroll_in_course(const Course & course);
    void submit_assignment(const Assignment& assignment);
    void join_club(const Club& club);



    // Function to write student data to a CSV file
   static  void write_student_data_to_csv(Student& student, const string& filename);
    //..................................
    // Inside the Student class definition
    void display_student_details() const;
    void checkSTUDENT();
    void Student_menu();
    Student Admin_menu(vector <Student>);
    Student Student_read();


};


