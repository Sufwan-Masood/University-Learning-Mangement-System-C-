#pragma once

#include <string>
#include"Student.h"
#include"Course.h"
using namespace std;

class Grade {
private:
    int grade_id;
    int student_id;
    int course_id;
    string grade;
    Student student;
    Course course;

public:
    // Constructors
    Grade();
    Grade(int gradeId, int studentId, int courseId, const string& grade, const Student & stu, const Course & cour);

    // Destructor
    ~Grade();

    // Getter methods
    int get_grade_id() const;
    int get_student_id() const;
    int get_course_id() const;
    string get_grade() const;

    // Setter methods
    void set_grade_id(int gradeId);
    void set_student_id(int studentId);
    void set_course_id(int courseId);
    void set_grade(const string& grade);

    static  void write_grade_data_to_csv(Grade& gra, const string& filename);
    void display_Grade_info();
    void checkGrade();

    void  Grademenu();
};


