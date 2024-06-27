#include "Grade.h"

// Default constructor
Grade::Grade() : grade_id(0), student_id(0), course_id(0), grade("") {}

Grade::Grade(int gradeId, int studentId, int courseId, const string& grade, const Student& stu, const Course& cour)
    : grade_id(gradeId), student_id(studentId), course_id(courseId), grade(grade),student (stu), course(cour) {}

    

// Destructor
Grade::~Grade() {}

// Getter methods
int Grade::get_grade_id() const {
    return grade_id;
}

int Grade::get_student_id() const {
    return student_id;
}

int Grade::get_course_id() const {
    return course_id;
}

string Grade::get_grade() const {
    return grade;
}

// Setter methods
void Grade::set_grade_id(int gradeId) {
    grade_id = gradeId;
}

void Grade::set_student_id(int studentId) {
    student_id = studentId;
}

void Grade::set_course_id(int courseId) {
    course_id = courseId;
}

void Grade::set_grade(const string& gr) {
    grade = gr;
}

void Grade::write_grade_data_to_csv(Grade& gra, const string& filename)
{
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current grade
    file << gra.grade_id << ",";
    file << gra.student_id << ",";
    file << gra.course_id << ",";
    file << gra.grade << endl;

    file.close();
}

void Grade::display_Grade_info()
{
    cout << "\n--------------------------------------------------------\n";
    cout << "\nGRADE_ID: " << grade_id << endl;
    cout << "\nSTUDENT_NAME: " << student.get_name() << endl;
    cout << "\nCOURSE_NAME: " << course.get_name() << endl;
    cout << "\nSTUDENT_ID: " << student.get_student_id() << endl;
    cout << "\nCOURSE_ID: " << course.get_course_id() << endl;
    cout << "\nGRADE: " << grade << endl;
    cout << "\n--------------------------------------------------------\n";
}

void Grade::checkGrade() {
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

    vector<Grade> grades = {
        Grade(1, 1, 123, "A", s1, c1),
        Grade(2, 2, 124, "B+", s2, c2),
        Grade(3, 3, 125, "B", s3, c3),
        Grade(4, 4, 126, "C", s4, c4),
        Grade(5, 5, 127, "A-", s5, c5),
        Grade(6, 6, 128, "B+", s6, c6),
        Grade(7, 7, 123, "B", s7, c1),
        Grade(8, 8, 124, "C+", s8, c2),
        Grade(9, 9, 125, "A", s9, c3),
        Grade(10, 10, 126, "B-", s10, c4),
        Grade(11, 11, 127, "A", s11, c5),
        Grade(12, 12, 128, "C", s12, c6),
        Grade(13, 13, 123, "B+", s13, c1),
        Grade(14, 14, 124, "A-", s14, c2)
    };

    // Write grade data to CSV file
    for (auto& grade : grades) {
        Grade::write_grade_data_to_csv(grade, "grades.csv");
    }

    // Display grade details
    for (auto& grade : grades) {
        grade.display_Grade_info();
    }
}

void Grade::Grademenu() {
    int choice;
    cout << "\n         WELCOME TO GRADE SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << grade_id << endl;
    cout << "\n\n\n1.   DISPLAY GRADE INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Display grade information
        display_Grade_info();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}




