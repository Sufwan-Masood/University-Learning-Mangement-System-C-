#pragma once
#include "Date.h"
#include <string>
class Assignment {
private:
    int assignment_id;
    int course_id;
    Date due_date;
    string description;
    


public:
    // Constructors
    Assignment();
    Assignment(int assignmentId, int courseId, const Date& dueDate, const string& desc);

    // Destructor
    ~Assignment();

    // Getter methods
    int get_assignment_id() const;
    int get_course_id() const;
    Date get_due_date() const;
    string get_description() const;

    // Setter methods
    void set_assignment_id(int assignmentId);
    void set_course_id(int courseId);
    void set_due_date(const Date& dueDate);
    void set_description(const string& desc);

    static  void write_assignment_data_to_csv(Assignment& assignm, const string& filename);
    void display_assignment_info();
    void checkAssignment();
    bool is_empty() {
        if (assignment_id < 0) {
            return true;
        }
        else 
            return false;
    }
    Assignment Club_menu();

};
