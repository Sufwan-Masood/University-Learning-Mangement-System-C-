#include "Department.h"

// Default constructor
Department::Department() : department_id(0), name(""), head_of_department("") {}

// Parameterized constructor
Department::Department(int id, const string& n, const string& hod)
    : department_id(id), name(n), head_of_department(hod) {}

// Destructor
Department::~Department() {}

// Getter methods
int Department::get_department_id() const {
    return department_id;
}

string Department::get_name() const {
    return name;
}

string Department::get_head_of_department() const {
    return head_of_department;
}

// Setter methods
void Department::set_department_id(int id) {
    department_id = id;
}

void Department::set_name(const string& n) {
    name = n;
}

void Department::set_head_of_department(const string& hod) {
    head_of_department = hod;
}

void Department::add_course(Course& course)
{
    courses_offered.push_back(course);
}

void Department::add_faculty(Faculty& faculty)
{
    faculty_members.push_back(faculty);
}


void Department::write_department_data_to_csv(Department& department, const string& filename)
{
    ofstream file(filename, ios::app); // Open the file in append mode to avoid overwriting existing content
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current department
    file << department.get_department_id() << ",";
    file << department.get_name() << ",";
    file << department.get_head_of_department() << ",";

    // Write courses offered
    for (const auto& course : department.get_courses_offered()) {
        file << course.get_course_id() << ":" << course.get_name() << ",";
    }
    file << ",";

    // Write faculty members
    for (const auto& faculty : department.get_faculty_members()) {
        file << faculty.get_faculty_id() << ":" << faculty.get_name() << ",";
    }
    file << endl;

    file.close();
}

void Department::display_Department_details()
{
    cout << "\n\n********************************************************************\n";
    cout << "           Department ID: " << department_id << endl;
    cout << "           Name: " << name << endl;
    cout << "           Head of Department: " << head_of_department << endl;
    cout << "           Courses Offered:" << endl;
    for (const auto& course : courses_offered) {
        cout << "  - " << course.get_name() << " (ID: " << course.get_course_id() << ")" << endl;
    }
    cout << "           Faculty Members:" << endl;
    for (const auto& faculty : faculty_members) {
        cout << "  - " << faculty.get_name() << " (ID: " << faculty.get_faculty_id() << ")" << endl;
    }
    cout << "\n********************************************************************\n\n";
}

void Department::checkDepartment()
{

    Department d1(1, "Department_of_Mathematics", "Dr.Ali_Khan");
    Department d2(2, "Department_of_Physics", "Dr.Sara_Ahmed");
    Department d3(3, "Department_of_Computer_Science", "Dr.Usman_Ali");
    Department d4(4, "Department_of_Chemistry", "Dr.Ayesha_Khan");
    Department d5(5, "Department_of_Biology", "Dr.Amir_Malik");

    // Initialize courses offered
    Course c1(123, "CALCULUS", 3, "MARIAM");
    Course c2(124, "Physics", 4, "Dr_Rafique_Ahmed");
    Course c3(125, "Computer_Science", 3, "Prof_Farhan_Khan");
    Course c4(126, "Chemistry", 3, "Dr._Aisha_Khan");
    Course c5(127, "Biology", 3, "Prof._Ali_Raza");
    Course c6(128, "English_Literature", 2, "Ms._Sana_Malik");

    // Initialize faculty members
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

    d1.add_course(c1);
    d2.add_course(c2);
    d3.add_course(c3);
    d4.add_course(c4);
    d5.add_course(c5);

    // Add faculty members to departments
    d1.add_faculty(f1);
    d2.add_faculty(f2);
    d3.add_faculty(f3);
    d4.add_faculty(f4);
    d5.add_faculty(f5);
    d5.add_faculty(f6);
    d1.add_faculty(f7);
    d2.add_faculty(f8);
    d3.add_faculty(f9);
    d4.add_faculty(f10);


    // Vector of departments
    vector<Department> dept = { d1, d2, d3, d4, d5 };

    // Write department data to CSV file
    for (auto& department : dept) {
        Department::write_department_data_to_csv(department, "department.csv");
    }

    // Display department details
    for (auto& department : dept) {
        department.display_Department_details();
    }
}

void Department::DepartmentMenu() {
    int choice;
    cout << "\n         WELCOME TO DEPARTMENT'S SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << name << " , ID:" << department_id << endl;
    cout << "\n\n\n1.   ADD COURSE\n";
    cout << "\n2.   ADD FACULTY\n";
    cout << "\n3.   DISPLAY DEPARTMENT INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int course_id;
        string course_name, instructor;
        int credits;

        cout << "\nEnter course ID: ";
        cin >> course_id;
        cout << "Enter course name: ";
        cin.ignore();
        getline(cin, course_name);
        cout << "Enter instructor name: ";
        getline(cin, instructor);
        cout << "Enter credits: ";
        cin >> credits;

        Course new_course(course_id, course_name, credits, instructor);
        add_course(new_course);
        cout << "\nCourse added successfully!" << endl;
    }
    else if (choice == 2) {
        int faculty_id;
        string faculty_name, email, phone_number;

        cout << "\nEnter faculty ID: ";
        cin >> faculty_id;
        cout << "Enter faculty name: ";
        cin >> faculty_name;
        cout << "Enter email: ";
        cin >> email;
        cout << "Enter phone number: ";
        phone_number;

        Faculty new_faculty(faculty_id, faculty_name, email, phone_number);
        add_faculty(new_faculty);
        cout << "\nFaculty added successfully!" << endl;
    }
    else if (choice == 3) {
        // Display department information
        display_Department_details();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}



