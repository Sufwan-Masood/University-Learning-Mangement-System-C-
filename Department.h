#pragma once
#include <string>
#include<vector>
#include"Course.h"
#include"Faculty.h"
using namespace std;

class Department {
private:
    int department_id;
    string name;
    string head_of_department;
    vector<Course>courses_offered;
    vector <Faculty>faculty_members;
public:
    // Constructors
    Department();
    Department(int id, const string& n, const string& hod);

    // Destructor
    ~Department();

    // Getter methods
    int get_department_id() const;
    string get_name() const;
    string get_head_of_department() const;
    vector<Course> get_courses_offered() const {
        return courses_offered;
    }

    vector<Faculty> get_faculty_members() const {
        return faculty_members;
    }

    // Setter methods
    void set_department_id(int id);
    void set_name(const string& n);
    void set_head_of_department(const string& hod);

    void add_course(Course& course);
    void add_faculty(Faculty& faculty);

    
    static  void write_department_data_to_csv(Department& department, const string& filename);


   void display_Department_details();
    void checkDepartment();
    void DepartmentMenu();


};


