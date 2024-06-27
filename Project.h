#pragma once
#include <string>
#include "Student.h"
#include "Faculty.h"
using namespace std;
class Project
// research
{
private:
    int project_id;
    string title;
    string description;
    vector <Student>students;
    Faculty faculty_supervisor;
public:
    // Constructors
    Project();
    Project(int projectId, const string& title, const string& description, const Faculty & fac);

    // Destructor
    ~Project();

    // Getter methods
    int get_project_id() const;
    string get_title() const;
    string get_description() const;

    // Setter methods
    void set_project_id(int projectId);
    void set_title(const string& title);
    void set_description(const string& description);




    static  void write_project_to_csv(const Project& pro, const string& filename);


    void display_project_details();
    void checkProject();
    void add_student_in_project(const Student & stu);
    void Student_menu();
};

