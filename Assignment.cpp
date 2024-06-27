#include "Assignment.h"
#include <fstream>
#include <vector>

// Default constructor
Assignment::Assignment() : assignment_id(0), course_id(0), due_date(), description("") {}

// Parameterized constructor
Assignment::Assignment(int assignmentId, int courseId, const Date& dueDate, const std::string& desc)
    : assignment_id(assignmentId), course_id(courseId), due_date(dueDate), description(desc) {}

// Destructor
Assignment::~Assignment() {}

// Getter methods
int Assignment::get_assignment_id() const {
    return assignment_id;
}

int Assignment::get_course_id() const {
    return course_id;
}

Date Assignment::get_due_date() const {
    return due_date;
}

std::string Assignment::get_description() const {
    return description;
}

// Setter methods
void Assignment::set_assignment_id(int assignmentId) {
    assignment_id = assignmentId;
}

void Assignment::set_course_id(int courseId) {
    course_id = courseId;
}

void Assignment::set_due_date(const Date& dueDate) {
    due_date = dueDate;
}

void Assignment::set_description(const std::string& desc) {
    description = desc;
}

void Assignment::write_assignment_data_to_csv(Assignment& assign, const string& filename) {
    ofstream file(filename, ios::app); 
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current assignment
    file << assign.assignment_id << ",";
    file << assign.course_id << ",";
    file << assign.due_date.get_year() << "-" << assign.due_date.get_month() << "-" << assign.due_date.get_day() << ",";
    file << assign.description << endl;

    file.close();
}


void Assignment::display_assignment_info()
{
    cout << "\n--------------------------------------------------------\n";
    cout << "\nASSIGNMENT_ID: " << assignment_id << endl;
    cout << "\nCOURSE_ID: " << course_id << endl;
    cout << "\nDUE DATE: " << due_date.get_year() << " / " << due_date.get_month() << " / " << due_date.get_day() << endl;
    cout << "\nDESCRIPTION: " << description << endl;
    cout << "\n--------------------------------------------------------\n";

}

void Assignment::checkAssignment() {
    // Initialize assignments
    Date d1(2023, 12, 6);
    Date d2(2024, 2, 10);
    Date d3(2024, 5, 1);
    Assignment a1(11, 123, d1, "semesterEND");
    Assignment a2(12, 124, d2, "Midterm_Exam");
    Assignment a3(13, 125, d3, "Programming_Project");
    Assignment a4(14, 126, d1, "Lab_Report");
    Assignment a5(15, 127, d2, "Essay");
    Assignment a6(16, 128, d3, "Final_Project");

    // Vector of assignments
    vector<Assignment> assignments = { a1, a2, a3, a4, a5 , a6};

    // Write assignment data to CSV file
    for (auto& assignment : assignments) {
        Assignment::write_assignment_data_to_csv(assignment, "assignments.csv");
    }

    // Display assignment details
    for (auto& assignment : assignments) {
        assignment.display_assignment_info();
    }
}

Assignment Assignment::Club_menu() {
    int choice;
    cout << "\n         WELCOME TO ASSIGNMENT SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << assignment_id << endl;
    cout << "\n\n\n1.   ADD ASSIGNMENT\n";
    cout << "\n2.   DISPLAY ASSIGNMENT INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int assignment_id;
        int course_id;
        string assignment_description;
        Date due_date;

        cout << "\nEnter assignment ID: ";
        cin >> assignment_id;
        cout << "Enter course ID: ";
        cin >> course_id;
        cout << "Enter assignment description: ";
        cin >> assignment_description;
        cout << "Enter due date (YYYY MM DD): ";
        int year;
        int month;
        int day;
        cin >> year >> month >> day;
        due_date.set_day(day);
        due_date.set_year(year);
        due_date.set_month(month);

        Assignment new_assignment(assignment_id, course_id, due_date, assignment_description);
        cout << "\nAssignment added successfully!" << endl;
        return new_assignment;
       

    }
    else if (choice == 2) {
        // Display assignment information
        display_assignment_info();
        Assignment trash;
        trash.assignment_id = -1;
        return trash;
    }
    else {
        cout << "Invalid choice!" << endl;
        Assignment trash;
        trash.assignment_id = -1;
        return trash;
    }
}


