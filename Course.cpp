#include "Course.h"
#include "Assignment.h"
#include <fstream>

 //Default constructor
Course::Course() : course_id(0), name(""), credits(0), instructor("") {}

// Parameterized constructor
Course::Course(int id, const string& n, int cr, const string& ins)
    : course_id(id), name(n), credits(cr), instructor(ins) {}

Course::Course(const Course& c1)
{
    course_id = c1.course_id;
    name = c1.name;
    credits = c1.credits;
    instructor = c1.instructor;
}

// Destructor
Course::~Course() {}

// Getter methods
int Course::get_course_id() const {
    return course_id;
}

string Course::get_name() const {
    return name;
}

int Course::get_credits() const {
    return credits;
}

string Course::get_instructor() const {
    return instructor;
}

vector<Assignment>Course::get_assignments() 
{
    return _assignments;
}

// Setter methods
void Course::set_course_id(int id) {
    course_id = id;
}

void Course::set_name(const string& n) {
    name = n;
}

void Course::set_credits(int cr) {
    credits = cr;
}

void Course::set_instructor(const string& ins) {
    instructor = ins;
}

void Course::add_assignment(const Assignment& assign)
{
    _assignments.push_back(assign);
}

void Course::write_course_data_to_csv(Course& course, const std::string& filename)
{
    std::ofstream file(filename, std::ios::app); // Open the file in append mode to avoid overwriting existing content
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file for writing: " << filename << std::endl;
        return;
    }

    // Write data for the current course
    file << course.get_course_id() << ",";
    file << course.get_name() << ",";
    file << course.get_credits() << ",";
    file << course.get_instructor() << ",";



    // Write assignments
    for (const auto& assignment : course.get_assignments()) {
        file << assignment.get_assignment_id() << ":" << assignment.get_description() << ",";
    }
    file << std::endl;

    file.close();
}

void Course::display_course_details() 
{
    cout << "\n---------------------------------------------------\n";
    cout << "\nCourse ID: " << course_id << endl;
    cout << "Course Name: " << name << endl;
    cout << "Instructor: " << instructor << endl;
    cout << "Credits: " << credits << endl;

    // Display assignments
    cout << "Assignments:" << endl;
    for (const auto& assignment : _assignments) {
        cout << "  - Assignment ID: " << assignment.get_assignment_id() << ", Description: " << assignment.get_description() << endl;
    }
    cout << "\n---------------------------------------------------\n";
}


void Course::checkCOURSE()
{
    Course c1(123, "CALCULUS", 3, "MARIAM");
    Course c2(124, "Physics", 4, "Dr_Rafique_Ahmed");
    Course c3(125, "Computer_Science", 3, "Prof_Farhan_Khan");
    Course c4(126, "Chemistry", 3, "Dr._Aisha_Khan");
    Course c5(127, "Biology", 3, "Prof._Ali_Raza");
    Course c6(128, "English_Literature", 2, "Ms._Sana_Malik");

    vector<Course> courses = { c1, c2, c3, c4, c5, c6 };

    cout << "\nAvailable Courses:" << endl;
    for (const auto& course : courses) {
        cout << course.get_course_id() << ": " << course.get_name() << endl;
    }
    write_course_data_to_csv(c1,"course.txt");
}

void Course::Course_menu()
{
    int choice;
    cout << "\n         WELCOME TO COURSE'S SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << get_name() << " , ID:" << get_course_id() << endl;
    cout << "\n\n\n1.   DISPLAY COURSE DETAILS\n";
    cout << "\n2.   ADD ASSIGNMENT\n";

    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        display_course_details();
    }
    else if (choice == 2) {
        int assignment_id;
        string description;

        cout << "\nEnter Assignment ID: ";
        cin >> assignment_id;
        cout << "\nEnter Assignment Description: ";
        cin.ignore(); // clear the input buffer
        getline(cin, description);

        Assignment new_assignment(assignment_id, get_course_id(),Date(12,10,22), description);
        add_assignment(new_assignment);
        cout << "\nAssignment Added Successfully!\n";
    }
   
    else {
        cout << "Invalid choice!" << endl;
    }
}


