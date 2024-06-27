#include "Enrollment.h"
#include "Date.h"



// Default constructor
Enrollment::Enrollment() : enrollment_id(0), student_id(0), course_id(0), enrollment_date() {}



// Parameterized constructor
Enrollment::Enrollment(int enrollmentId, int studentId, int courseId, const Date& enrollmentDate, const Student& s, const Course& c)
    : enrollment_id(enrollmentId), student_id(studentId), course_id(courseId), enrollment_date(enrollmentDate),student(s),course(c) {}

// Destructor
Enrollment::~Enrollment() {}

// Getter methods
int Enrollment::get_enrollment_id() const {
    return enrollment_id;
}

int Enrollment::get_student_id() const {
    return student_id;
}

int Enrollment::get_course_id() const {
    return course_id;
}

Date Enrollment::get_enrollment_date() const {
    return enrollment_date;
}

// Setter methods
void Enrollment::set_enrollment_id(int enrollmentId) {
    enrollment_id = enrollmentId;
}

void Enrollment::set_student_id(int studentId) {
    student_id = studentId;
}

void Enrollment::set_course_id(int courseId) {
    course_id = courseId;
}

void Enrollment::set_enrollment_date(const Date& enrollmentDate) {
    enrollment_date = enrollmentDate;
}

void Enrollment::write_enrollment_data_to_csv(Enrollment& enr, const string& filename) {
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current enrollment
    file << enr.enrollment_id << ",";
    file << enr.student_id << ",";
    file << enr.course_id << ",";
    file << enr.enrollment_date.get_year() << "-" << enr.enrollment_date.get_month() << "-" << enr.enrollment_date.get_day() << endl;
    
    file.close();
}

void Enrollment::display_enrollment_info() {
    std::cout << "\n--------------------------------------------------------\n";
    std::cout << "\nENROLLMENT_ID: " << enrollment_id << std::endl;
    std::cout << "\nSTUDENT_ID: " << student.get_student_id() << std::endl;
    std::cout << "\nCOURSE_ID: " << course.get_course_id() << std::endl;
    std::cout << "\nENROLLMENT_DATE: " << enrollment_date.get_year() << " / " << enrollment_date.get_month() << " / " << enrollment_date.get_day() << std::endl;
    std::cout << "\n--------------------------------------------------------\n";
}

void Enrollment::checkEnrollment() {
    Student s1{ 1,"SUFWAN","sufwanmasood15gmail","0345678" };
    Student s2{ 2, "Ali_Khan", "alikhan@gmail.com", "03001234567" };
    Student s3{ 3, "Ayesha_Ahmed", "ayeshaahmed@yahoo.com", "03123456789" };
    Student s4(4, "Hamna_Nasir", "hamna_nasir@gmail", "03312782");

    Student s5{ 5, "Abdul_Majeed", "abdulmajeed@hotmail.com", "03234567890" };
    Student s6{ 6, "Fatima_Khan", "fatimakhan@gmail.com", "03415678902" };
    Student s7{ 7, "Imran_Ahmed", "imranahmed@yahoo.com", "03123456781" };
    Student s8{ 8, "Sara_Ali", "saraali@hotmail.com", "03017894567" };
    Student s9{ 9, "Usman_Khan", "usmankhan@gmail.com", "03213456789" };
    Student s10{ 10, "Hina_Ahmed", "hinaahmed@yahoo.com", "03127894567" };
    Student s11{ 11, "Bilal_Khan", "bilalkhan@gmail.com", "03315678902" };
    Student s12{ 12, "Sadia_Ahmed", "sadiaahmed@hotmail.com", "03013456781" };
    Student s13{ 13, "Ahmed_Ali", "ahmedali@gmail.com", "03223456789" };
    Student s14{ 14, "Maryam_Khan", "maryamkhan@yahoo.com", "03127894567" };
    // Create courses
    Course c1(123, "CALCULUS", 3, "MARIAM");
    Course c2(124, "Physics", 4, "Dr_Rafique_Ahmed");
    Course c3(125, "Computer_Science", 3, "Prof_Farhan_Khan");
    Course c4(126, "Chemistry", 3, "Dr._Aisha_Khan");
    Course c5(127, "Biology", 3, "Prof._Ali_Raza");
    Course c6(128, "English_Literature", 2, "Ms._Sana_Malik");
    // Initialize enrollments
    Date d1(2023, 12, 6);
    Date d2(2024, 2, 10);
    Date d3(2024, 5, 1);
    Enrollment e1(1, 1, 123, d1, s1, c1);
    Enrollment e2(2, 2, 124, d2, s2, c2);
    Enrollment e3(3, 3, 125, d3, s3, c3);
    Enrollment e4(4, 4, 126, d1, s4, c4);
    Enrollment e5(5, 5, 127, d2, s5, c5);
    Enrollment e6(6, 6, 128, d3, s6, c6);
    Enrollment e7(7, 7, 123, d1, s7, c1);
    Enrollment e8(8, 8, 124, d2, s8, c2);
    Enrollment e9(9, 9, 125, d3, s9, c3);
    Enrollment e10(10, 10, 126, d1, s10, c4);
    Enrollment e11(11, 11, 127, d2, s11, c5);
    Enrollment e12(12, 12, 128, d3, s12, c6);
    Enrollment e13(13, 13, 123, d1, s13, c1);
    Enrollment e14(14, 14, 124, d2, s14, c2);

    // Vector of enrollments
    vector<Enrollment> enrollments = { e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14 };

    // Write enrollment data to CSV file
    for (auto& enrollment : enrollments) {
        Enrollment::write_enrollment_data_to_csv(enrollment, "enrollments.csv");
    }

    // Display enrollment details
    for (auto& enrollment : enrollments) {
        enrollment.display_enrollment_info();
    }
}

void Enrollment::Enrollment_menu() {
    int choice;
    cout << "\n         WELCOME TO ENROLLMENT SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << enrollment_id << endl;
    cout << "\n\n\n1.   DISPLAY ENROLLMENT INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Display enrollment information
        display_enrollment_info();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}

