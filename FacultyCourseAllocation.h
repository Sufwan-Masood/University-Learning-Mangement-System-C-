#pragma once
#include <string>
using namespace std;
#include"Faculty.h"
#include"Course.h"

class FacultyCourseAllocation {
private:
    int allocation_id;
    int faculty_id;
    int course_id;
   string semester;
   Faculty faculty;
   Course course;

public:
    // Constructors
    FacultyCourseAllocation();
    FacultyCourseAllocation(int allocationId, int facultyId, int courseId, const string& semester,const Faculty & fac, const Course & cou);

    // Destructor
    ~FacultyCourseAllocation();

    // Getter methods
    int get_allocation_id() const;
    int get_faculty_id() const;
    int get_course_id() const;
    string get_semester() const;

    // Setter methods
    void set_allocation_id(int allocationId);
    void set_faculty_id(int facultyId);
    void set_course_id(int courseId);
    void set_semester(const string& semester);

    static  void write_Faculty_Course_data_to_csv(FacultyCourseAllocation & fca, const string& filename);
    void display_Faculty_Course_info();
    void checkFaculty_Course();

    void  Faculty_Course_menu();
};


