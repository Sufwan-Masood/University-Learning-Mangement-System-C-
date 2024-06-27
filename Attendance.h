#pragma once

#include <string>
using namespace std;
#include "Student.h"

class Attendance {
private:
    int attendance_id;
    int student_id;
    int session_id;
    string attendance_status;
    Student student;
   

public:
    // Constructors
    Attendance();
    Attendance(int attendanceId, int studentId, int sessionId, const string& status, const Student & st);

    // Destructor
    ~Attendance();

    // Getter methods
    int get_attendance_id() const;
    int get_student_id() const;
    int get_session_id() const;
    string get_attendance_status() const;

    // Setter methods
    void set_attendance_id(int attendanceId);
    void set_student_id(int studentId);
    void set_session_id(int sessionId);
    void set_attendance_status(const string& status);

    static  void write_attendance_to_csv(Attendance & att, const string& filename);
    void attendance_info();
    void checkAttendance();

    void  attendance_menu();
};

