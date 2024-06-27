#include "Faculty.h"
// Default constructor
Faculty::Faculty() : faculty_id(0), name(""), email(""), phone_number("") {}

// Parameterized constructor
Faculty::Faculty(int id, const string& n, const string& email, const string& phone)
    : faculty_id(id), name(n), email(email), phone_number(phone) {}

// Destructor
Faculty::~Faculty() {}

// Getter methods
int Faculty::get_faculty_id() const {
    return faculty_id;
}

string Faculty::get_name() const {
    return name;
}

string Faculty::get_email() const {
    return email;
}

string Faculty::get_phone_number() const {
    return phone_number;
}

// Setter methods
void Faculty::set_faculty_id(int id) {
    faculty_id = id;
}

void Faculty::set_name(const string& n) {
    name = n;
}

void Faculty::set_email(const string& email) {
   this-> email = email;
}

void Faculty::set_phone_number(const string& phone) {
    phone_number = phone;
}

void Faculty::teach_course(const Course& cor)
{
    course_taught.push_back(cor);
}

void Faculty::supervise_project(const Student& stu)
{
    supervised_students.push_back(stu);
}

void Faculty::write_faculty_data_to_csv(Faculty& faculty, const string& filename)
{
    ofstream file(filename, ios::app); // Open the file in append mode to avoid overwriting existing content
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current faculty member
    file << faculty.get_faculty_id() << ",";
    file << faculty.get_name() << ",";
    file << faculty.get_email() << ",";
    file << faculty.get_phone_number() << ",";

    // Write supervised projects
    for (const auto& project : faculty.get_supervised_students()) {
        file << project.get_student_id() << ":" << project.get_name() << ",";
    }
    file << ",";

    // Write taught courses
    for (const auto& course : faculty.get_course_taught()) {
        file << course.get_course_id() << ":" << course.get_name() << ",";
    }
    file << endl;

    file.close();
}





void Faculty::display_Faculty_details() 
{
    cout << "\n\n********************************************************************\n";
    cout << "           Faculty ID: " << faculty_id << endl;
    cout << "           Name: " << name << endl;
    cout << "           Email: " << email << endl;
    cout << "           Phone Number: " << phone_number << endl;
    cout << "           Supervised Projects:" << endl;
    for ( auto& project : supervised_students) {
        cout << "  - " << project.get_name() << " (ID: " << project.get_student_id() << ")" << endl;
    }
    cout << "Taught Courses:" << endl;
    for ( auto& course : course_taught) {
        cout << "  - " << course.get_name() << " (ID: " << course.get_course_id() << ")" << endl;
    }
    cout << "\n********************************************************************\n\n";
}



    void Faculty::checkFACULTY()
    {
        Faculty f1(1, "Dr_Aslam", "aslam@university.edu", "03211234567");
        Faculty f2(2, "Dr_Zahid", "zahid@university.edu", "03001234567");
        Faculty f3(3, "Dr_Saba", "saba@university.edu", "03123456789");
        Faculty f4(4, "Dr_Kamran", "kamran@university.edu", "03312782567");
        Faculty f5(5, "Dr_Sadia", "sadia@university.edu", "03415678902");
        Faculty f6(6, "Dr_Aisha", "aisha@university.edu", "03127894567");
        Faculty f7(7, "Dr_Ali", "ali@university.edu", "03013456781");
        Faculty f8(8, "Dr_Sara", "sara@university.edu", "03017894567");
        Faculty f9(9, "Dr_Usman", "usman@university.edu", "03213456789");
        Faculty f10(10, "Dr_Hina", "hina@university.edu", "03127894567");

        Course c1(123, "CALCULUS", 3, "MARIAM");
        Course c2(124, "Physics", 4, "Dr_Rafique_Ahmed");
        Course c3(125, "Computer_Science", 3, "Prof_Farhan_Khan");
        Course c4(126, "Chemistry", 3, "Dr._Aisha_Khan");
        Course c5(127, "Biology", 3, "Prof._Ali_Raza");
        Course c6(128, "English_Literature", 2, "Ms._Sana_Malik");


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
        f1.supervise_project(s1);
        f1.teach_course(c3);

        f2.supervise_project(s2);
        f2.teach_course(c4);

        f3.supervise_project(s3);
        f3.teach_course(c5);

        f4.supervise_project(s4);
        f4.teach_course(c6);

        f5.supervise_project(s5);
        f5.teach_course(c1);

        vector<Faculty> faculty = { f1, f2, f3, f4, f5, f6, f7, f8, f9, f10 };

        // Write faculty data to CSV file
        for ( auto& f : faculty) {
            write_faculty_data_to_csv(f, "faculty.csv");
        }
        for ( auto& f : faculty) {
            f.display_Faculty_details();
        }
    }



    void Faculty::Faculty_menu() {
        int choice;
        cout << "\n         WELCOME TO FACULTY'S SECTION\n";
        cout << "\n         LOGGED ACCOUNT: " << get_name() << " , ID:" << get_faculty_id() << endl;
        cout << "\n\n\n1.   TEACH COURSE\n";
        cout << "\n2.   SUPERVISE PROJECT\n";
        cout << "\n3.   DISPLAY FACULTY INFORMATION\n";
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

            cout << "\nSELECT A COURSE TO TEACH (1-6): ";
            cin >> choice;
            if (choice >= 1 && choice <= 6) {
                Course selectedCourse;
                switch (choice) {
                case 1:
                    selectedCourse = c1;
                    break;
                case 2:
                    selectedCourse = c2;
                    break;
                case 3:
                    selectedCourse = c3;
                    break;
                case 4:
                    selectedCourse = c4;
                    break;
                case 5:
                    selectedCourse = c5;
                    break;
                case 6:
                    selectedCourse = c6;
                    break;
                }
                // This function will handle the teaching process
                teach_course(selectedCourse);
                cout << "\n!!! COURSE TAUGHT SUCCESSFULLY !!!";
            }
            else {
                cout << "\nInvalid course choice.";
            }
        }
        else if (choice == 2) {
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

            // Supervise project for a random student
            supervise_project(s1);
            cout << "\n!!! PROJECT SUPERVISED SUCCESSFULLY !!!";
        }
        else if (choice == 3) {
            cout << "\n\n       SHOWING DETAILS OF: " << "\n         LOGGED ACCOUNT: " << get_name() << " , ID:" << get_faculty_id() << endl;
            display_Faculty_details();
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }


