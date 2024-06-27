#pragma once
#include "Date.h"
#include"Student.h"
#include "Course.h"


class Enrollment {
private:
    int enrollment_id;
    int student_id;
    int course_id;
    Date enrollment_date;
    Student student;
    Course course;
  
   

public:
    // Constructors
    Enrollment();
    Enrollment(int enrollmentId, int studentId, int courseId, const Date& enrollmentDate, const Student & s,const Course & c);

    // Destructor
    ~Enrollment();

    // Getter methods
    int get_enrollment_id() const;
    int get_student_id() const;
    int get_course_id() const;
    Date get_enrollment_date() const;

    // Setter methods
    void set_enrollment_id(int enrollmentId);
    void set_student_id(int studentId);
    void set_course_id(int courseId);
    void set_enrollment_date(const Date& enrollmentDate);


    static  void write_enrollment_data_to_csv(Enrollment& enr, const string& filename);
    void display_enrollment_info();
    void checkEnrollment();
   
    void  Enrollment_menu();
};


