#include "Attendance.h"


// Default constructor
Attendance::Attendance() : attendance_id(0), student_id(0), session_id(0), attendance_status("") {}

Attendance::Attendance(int attendanceId, int studentId, int sessionId, const string& status, const Student& st)
    : attendance_id(attendanceId), student_id(studentId), session_id(sessionId), attendance_status(status),student(st) {}




// Destructor
Attendance::~Attendance() {}

// Getter methods
int Attendance::get_attendance_id() const {
    return attendance_id;
}

int Attendance::get_student_id() const {
    return student_id;
}

int Attendance::get_session_id() const {
    return session_id;
}

string Attendance::get_attendance_status() const {
    return attendance_status;
}

// Setter methods
void Attendance::set_attendance_id(int attendanceId) {
    attendance_id = attendanceId;
}

void Attendance::set_student_id(int studentId) {
    student_id = studentId;
}

void Attendance::set_session_id(int sessionId) {
    session_id = sessionId;
}

void Attendance::set_attendance_status(const string& status) {
    attendance_status = status;
}

void Attendance::write_attendance_to_csv(Attendance& att, const string& filename)
{
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current attendance
    file << att.attendance_id << ",";
    file << att.student_id << ",";
    file << att.session_id << ",";
    file << att.attendance_status << ",";
    file << att.student.get_name() << endl;

    file.close();
}

void Attendance::attendance_info()
{
    cout << "\n--------------------------------------------------------\n";
    cout << "\nATTENDANCE_ID: " << attendance_id << endl;
    cout << "\nSTUDENT_ID: " << student_id << endl;
    cout << "\nSESSION_ID: " << session_id << endl;
    cout << "\nATTENDANCE_STATUS: " << attendance_status << endl;
    cout << "\nSTUDENT_NAME: " << student.get_name() << endl;
    cout << "\n--------------------------------------------------------\n";
}

void Attendance::checkAttendance()
{
    // Create student objects
    Student s1(1, "SUFWAN", "sufwanmasood15gmail", "0345678");
    Student s2(2, "Ali_Khan", "alikhan@gmail.com", "03001234567");
    Student s3(3, "Ayesha_Ahmed", "ayeshaahmed@yahoo.com", "03123456789");
    Student s4(4, "Hamna_Nasir", "hamna_nasir@gmail", "03312782");
    Student s5(5, "Abdul_Majeed", "abdulmajeed@hotmail.com", "03234567890");
    Student s6(6, "Fatima_Khan", "fatimakhan@gmail.com", "03415678902");
    Student s7(7, "Imran_Ahmed", "imranahmed@yahoo.com", "03123456781");
    Student s8(8, "Sara_Ali", "saraali@hotmail.com", "03017894567");
    Student s9(9, "Usman_Khan", "usmankhan@gmail.com", "03213456789");
    Student s10(10, "Hina_Ahmed", "hinaahmed@yahoo.com", "03127894567");
    Student s11(11, "Bilal_Khan", "bilalkhan@gmail.com", "03315678902");
    Student s12(12, "Sadia_Ahmed", "sadiaahmed@hotmail.com", "03013456781");
    Student s13(13, "Ahmed_Ali", "ahmedali@gmail.com", "03223456789");
    Student s14(14, "Maryam_Khan", "maryamkhan@yahoo.com", "03127894567");

    // Create attendance records
    Attendance att1(1, s1.get_student_id(), 1, "Present", s1);
    Attendance att2(2, s2.get_student_id(), 2, "Absent", s2);
    Attendance att3(3, s3.get_student_id(), 3, "Present", s3);
    Attendance att4(4, s4.get_student_id(), 4, "Absent", s4);
    Attendance att5(5, s5.get_student_id(), 5, "Present", s5);
    Attendance att6(6, s6.get_student_id(), 6, "Absent", s6);
    Attendance att7(7, s7.get_student_id(), 7, "Present", s7);
    Attendance att8(8, s8.get_student_id(), 8, "Absent", s8);
    Attendance att9(9, s9.get_student_id(), 9, "Present", s9);
    Attendance att10(10, s10.get_student_id(), 10, "Absent", s10);
    Attendance att11(11, s11.get_student_id(), 11, "Present", s11);
    Attendance att12(12, s12.get_student_id(), 12, "Absent", s12);
    Attendance att13(13, s13.get_student_id(), 13, "Present", s13);
    Attendance att14(14, s14.get_student_id(), 14, "Absent", s14);

    // Create vector to hold attendance records
    vector<Attendance> attendanceRecords = { att1, att2, att3, att4, att5, att6, att7, att8, att9, att10, att11, att12, att13, att14 };

    // Write attendance records to CSV file
    for (auto& att : attendanceRecords) {
        Attendance::write_attendance_to_csv(att, "attendance_records.csv");
    }

    // Display attendance records
    for (auto& att : attendanceRecords) {
        att.attendance_info();
    }
}

void Attendance::attendance_menu() {
    int choice;
    cout << "\n         WELCOME TO ATTENDANCE SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << student.get_student_id() << endl;
    cout << "\n         LOGGED ACCOUNT: " << student.get_name() << endl;
    cout << "\n\n\n1.   DISPLAY ATTENDANCE INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Display attendance information
        attendance_info();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}




