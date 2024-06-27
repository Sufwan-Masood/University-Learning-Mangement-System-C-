#include "Student.h"
#include"Course.h"
#include"Assignment.h"
#include "Club.h"

    Date d1(2023, 12, 6);
    Date d2(2024, 2, 10);
    Date d3{ 2024,5,1 };
void Student::checkSTUDENT()
{


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



    Course c1(123, "CALCULUS", 3, "MARIAM");
    Course c2(124, "Physics", 4, "Dr_Rafique_Ahmed");
    Course c3(125, "Computer_Science", 3, "Prof_Farhan_Khan");
    Course c4(126, "Chemistry", 3, "Dr._Aisha_Khan");
    Course c5(127, "Biology", 3, "Prof._Ali_Raza");
    Course c6(128, "English_Literature", 2, "Ms._Sana_Malik");


    Assignment a1(11, 123, d1, "semesterEND");
    Assignment a2(12, 124, d2, "Midterm_Exam");
    Assignment a3(13, 125, d3, "Programming_Project");
    Assignment a4(14, 126, d1, "Lab_Report");
    Assignment a5(15, 127, d2, "Essay");
    Assignment a6(16, 128, d3, "Final_Project");

    Club Cl1(661, "MLSA", "MICROSOFT");
    Club Cl2(662, "PAK_NS", "NISHAT");
    Club Cl3(663, "TEDx", "UET_KSK");
    Club Cl4(664, "Debating_Club", "UET_Lahore");
    Club Cl5(665, "Programming_Club", "FAST");
    Club Cl6(666, "Photography_Club", "NUST");


    s1.enroll_in_course(c1);
    s1.enroll_in_course(c2);
    s1.submit_assignment(a1);
    s1.join_club(Cl1);

    s1.display_student_details();
    s1.write_student_data_to_csv(s1, "student.txt");
}

void Student::Student_menu() {
    int choice;
    cout << "\n         WELCOME TO STUDENT'S SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << get_name() << " , ID:" << get_student_id() << endl;
    cout << "\n\n\n1.   ENROLL IN COURSES\n";
    cout << "\n2.   SUBMIT ASSIGNMENTS\n";
    cout << "\n3.   JOIN CLUBS\n";
    cout << "\n4.   DISPLAY STUDENT INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        Course c1(123, "CALCULUS", 3, "MARIAM");
        Course c2(124, "Physics", 4, "Dr_Rafique_Ahmed");
        Course c3(125, "Computer_Science", 3, "Prof_Farhan_Khan");
        Course c4(126, "Chemistry", 3, "Dr._Aisha_Khan");
        Course c5(127, "Biology", 3, "Prof._Ali_Raza");
        Course c6(128, "English_Literature", 2, "Ms._Sana_Malik");

        cout << "\nAVAILABLE COURSES ARE:\n";
        cout << "1. " << c1.get_name() << " (ID: " << c1.get_course_id() << ")" << endl;
        cout << "   Instructor: " << c1.get_instructor() << ", Credits: " << c1.get_credits() << endl;
        cout << "2. " << c2.get_name() << " (ID: " << c2.get_course_id() << ")" << endl;
        cout << "   Instructor: " << c2.get_instructor() << ", Credits: " << c2.get_credits() << endl;
        cout << "3. " << c3.get_name() << " (ID: " << c3.get_course_id() << ")" << endl;
        cout << "   Instructor: " << c3.get_instructor() << ", Credits: " << c3.get_credits() << endl;
        cout << "4. " << c4.get_name() << " (ID: " << c4.get_course_id() << ")" << endl;
        cout << "   Instructor: " << c4.get_instructor() << ", Credits: " << c4.get_credits() << endl;
        cout << "5. " << c5.get_name() << " (ID: " << c5.get_course_id() << ")" << endl;
        cout << "   Instructor: " << c5.get_instructor() << ", Credits: " << c5.get_credits() << endl;
        cout << "6. " << c6.get_name() << " (ID: " << c6.get_course_id() << ")" << endl;
        cout << "   Instructor: " << c6.get_instructor() << ", Credits: " << c6.get_credits() << endl;

        cout << "\nDO YOU WANT TO ENROLL? PRESS 1 to Enroll, 0 to exit: ";
        cin >> choice;
        if (choice == 1) {
            cout << "\nENTER COURSE NUMBER: ";
            cin >> choice;
            switch (choice) {
            case 1:
                enroll_in_course(c1);
                cout << "\n     !!ENROLLED SUSSESSFULLY!!\n";
                break;
            case 2:
                enroll_in_course(c2);
                cout << "\n     !!ENROLLED SUSSESSFULLY!!\n";
                break;
            case 3:
                enroll_in_course(c3);
                cout << "\n     !!ENROLLED SUSSESSFULLY!!\n";
                break;
            case 4:
                enroll_in_course(c4);
                cout << "\n     !!ENROLLED SUSSESSFULLY!!\n";
                break;
            case 5:
                enroll_in_course(c5);
                cout << "\n     !!ENROLLED SUSSESSFULLY!!\n";
                break;
            case 6:
                enroll_in_course(c6);
                cout << "\n     !!ENROLLED SUSSESSFULLY!!\n";
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
            }
        }
    }
    else if (choice == 2) {
        Assignment a1(11, 123, d1, "semesterEND");
        Assignment a2(12, 124, d2, "Midterm_Exam");
        Assignment a3(13, 125, d3, "Programming_Project");
        Assignment a4(14, 126, d1, "Lab_Report");
        Assignment a5(15, 127, d2, "Essay");
        Assignment a6(16, 128, d3, "Final_Project");

    
        cout << "\n------- ASSIGNMENTS -------\n";
        cout << "1. " << a1.get_description() << " (Due Date: " << a1.get_due_date().to_string() << ")" << endl;
        cout << "2. " << a2.get_description() << " (Due Date: " << a2.get_due_date().to_string() << ")" << endl;
        cout << "3. " << a3.get_description() << " (Due Date: " << a3.get_due_date().to_string() << ")" << endl;
        cout << "4. " << a4.get_description() << " (Due Date: " << a4.get_due_date().to_string() << ")" << endl;
        cout << "5. " << a5.get_description() << " (Due Date: " << a5.get_due_date().to_string() << ")" << endl;
        cout << "6. " << a6.get_description() << " (Due Date: " << a6.get_due_date().to_string() << ")" << endl;

  // Prompt user to select an assignment
        cout << "\nSelect an assignment to submit (1-6): ";
        int assignmentChoice;
        cin >> assignmentChoice;

                                 // Validate the assignment choice
        if (assignmentChoice >= 1 && assignmentChoice <= 6) {
            // Retrieve the selected assignment
            Assignment selectedAssignment;
            switch (assignmentChoice) {
            case 1:
                selectedAssignment = a1;
                break;
            case 2:
                selectedAssignment = a2;
                break;
            case 3:
                selectedAssignment = a3;
                break;
            case 4:
                selectedAssignment = a4;
                break;
            case 5:
                selectedAssignment = a5;
                break;
            case 6:
                selectedAssignment = a6;
                break;
            }

           
            // This function will handle the submission process
            submit_assignment(selectedAssignment);
            cout << "\n!!! ASSIGNMNET SUBMITTED !!!";
        }
        else {
            cout << "\nInvalid assignment choice.\n";
        }
    }

    else if (choice == 3) {
        
        Club Cl1(661, "MLSA", "MICROSOFT");
        Club Cl2(662, "PAK_NS", "NISHAT");
        Club Cl3(663, "TEDx", "UET_KSK");
        Club Cl4(664, "Debating_Club", "UET_Lahore");
        Club Cl5(665, "Programming_Club", "FAST");
        Club Cl6(666, "Photography_Club", "NUST");

                     // Display available clubs
        cout << "\nAVAILABLE CLUBS ARE:\n";
        cout << "1. " << Cl1.get_name() << " (ID: " << Cl1.get_club_id() << ")" << endl;
        cout << "   Description: " << Cl1.get_description() << endl;

        cout << "2. " << Cl2.get_name() << " (ID: " << Cl2.get_club_id() << ")" << endl;
        cout << "   Description: " << Cl2.get_description() << endl;

        cout << "3. " << Cl3.get_name() << " (ID: " << Cl3.get_club_id() << ")" << endl;
        cout << "   Description: " << Cl3.get_description() << endl;

        cout << "4. " << Cl4.get_name() << " (ID: " << Cl4.get_club_id() << ")" << endl;
        cout << "   Description: " << Cl4.get_description() << endl;

        cout << "5. " << Cl5.get_name() << " (ID: " << Cl5.get_club_id() << ")" << endl;
        cout << "   Description: " << Cl5.get_description() << endl;

        cout << "6. " << Cl6.get_name() << " (ID: " << Cl6.get_club_id() << ")" << endl;
        cout << "   Description: " << Cl6.get_description() << endl;

        // Prompt user to select a club
        int clubChoice;
        cout << "\nENTER CLUB NUMBER TO JOIN: ";
        cin >> clubChoice;

                // Join the selected club
        switch (clubChoice) {
        case 1:
            join_club(Cl1);
            cout << "Joined " << Cl1.get_name() << " club successfully!" << endl;
            break;
        case 2:
            join_club(Cl2);
            cout << "Joined " << Cl2.get_name() << " club successfully!" << endl;
            break;
        case 3:
            join_club(Cl3);
            cout << "Joined " << Cl3.get_name() << " club successfully!" << endl;
            break;
        case 4:
            join_club(Cl4);
            cout << "Joined " << Cl4.get_name() << " club successfully!" << endl;
            break;
        case 5:
            join_club(Cl5);
            cout << "Joined " << Cl5.get_name() << " club successfully!" << endl;
            break;
        case 6:
            join_club(Cl6);
            cout << "Joined " << Cl6.get_name() << " club successfully!" << endl;
            break;
        default:
            cout << "Invalid club choice.";
            break;
        }
        }
    else if (choice == 4) {
        cout << "\n\n       SHOWING DETAILS OF: " << "\n         LOGGED ACCOUNT: " << get_name() << " , ID:" << get_student_id() << endl;
        display_student_details();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}

Student Student::Admin_menu(vector<Student> v) {
    int choice;
    cout << "\n     ADMIN MENU\n";
    cout << "\n1. REGISTER A STUDENT\n";
    cout << "\n2. DIPLAY INFORMATION OF ALL STUDENTS\n";
    cout << "\nENTER YOUR CHOICE: ";
    cin >> choice;

    if (choice == 1) {
        return Student_read();
    }
   
    else if (choice == 2) {
        for (auto& c : v) {
            c.display_student_details();
        }
       
    }

    else {
        cout << "\nINVALID CHOICE\n";

        return Student(); // Returning a default-constructed Student object
    }
}



Student Student::Student_read() {
    int student_id;
    string name;
    string email;
    string phone_number;

    cout << "\nENTER STUDENT ID: ";
    cin >> student_id;

    cout << "\nENTER NAME: ";
    cin >> name;

    cout << "ENTER EMAIL: ";
    cin >> email;

    cout << "ENTER PHONE NUMBER: ";
    cin >> phone_number;

                                // Create a new Student object with the provided information
    Student new_student(student_id+1, name, email, phone_number);
    cout << "\n      !! STUDENT SUCCESSFULLY REGISTERED !!\n";

    
    return new_student;
}





                        // Default constructor
Student::Student() : student_id(0), name(""), email(""), phone_number("") {}

//          Parameterized constructor
Student::Student(int id, const string& n, const string& email, const string& phone)
    : student_id(id), name(n), email(email), phone_number(phone) {}

                        // Destructor
Student::~Student() {}

//Getter methods
int Student::get_student_id() const {
    return student_id;
}

string Student::get_name() const {
    return name;
}

string Student::get_email() const {
    return email;
}

string Student::get_phone_number() const {
    return phone_number;
}

vector<Course> Student::get_enrolled_courses()
{
    return enrolled_courses;
}

vector<Assignment> Student::get_submitted_assignments()
{
    return submitted_assignments;
}
vector<Club>Student::get_joined_clubs() {
    return joined_clubs;
}

                                                                // Setter methods
void Student::set_student_id(int id) {
    student_id = id;
}

void Student::set_name(const string& n) {
    name = n;
}

void Student::set_email(const string& email) {
   this-> email = email;
}

void Student::set_phone_number(const string& phone) {
    phone_number = phone;
}

void Student::enroll_in_course(const Course& course) {
    enrolled_courses.push_back(course);
}

//                                               Assignment submission function definition
void Student::submit_assignment(const Assignment& assignment) {
    submitted_assignments.push_back(assignment);
}

//          Club joining function definition
void Student::join_club(const Club& club) {
    joined_clubs.push_back(club);
}

void Student::write_student_data_to_csv(Student& student, const string& filename)
{
    ofstream file(filename, ios::app); // Open the file in append mode to avoid overwriting existing content
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

                         // Write data for the current student
    file << student.get_student_id() << ",";
    file << student.get_name() << ",";
    file << student.get_email() << ",";
    file << student.get_phone_number() << ",";

   // Write enrolled courses
    for (const auto& course : student.get_enrolled_courses()) {
        file << course.get_course_id() << ":" << course.get_name() << ",";
    }
    file << ",";

        // Write submitted assignments
    for (const auto& assignment : student.get_submitted_assignments()) {
        file << assignment.get_assignment_id() << ":" << assignment.get_description() << ",";
    }
    file << ",";

                         // Write joined clubs
    for (const auto& club : student.get_joined_clubs()) {
        file << club.get_club_id() << ":" << club.get_name() << ",";
    }
    file << endl;

    file.close();
}

void Student::display_student_details() const
{
    cout << "\n\n********************************************************************\n";
    cout << "           Student ID: " << student_id << endl;
    cout << "           Name: " << name << endl;
    cout << "           Email: " << email << endl;
    cout << "           Phone Number: " << phone_number << endl;
    cout << "           Enrolled Courses:" << endl;
    for (const auto& course : enrolled_courses) {
        cout << "  - " << course.get_name() << " (ID: " << course.get_course_id() << ")" << endl;
    }
    cout << "Submitted Assignments:" << endl;
    for (const auto& assignment : submitted_assignments) {
        cout << "  - " << assignment.get_description() << " (ID: " << assignment.get_assignment_id() << ")" << endl;
    }
    cout << "Joined Clubs:" << endl;
    for (const auto& club : joined_clubs) {
        cout << "  - " << club.get_name() << " (ID: " << club.get_club_id() << ")" << endl;
    }
    cout << "\n********************************************************************\n\n";
}



