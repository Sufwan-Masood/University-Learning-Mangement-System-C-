#include "Project.h"
// Default constructor
Project::Project() : project_id(0), title(""), description("") {}



// Parameterized constructor
Project::Project(int projectId, const string& t, const string& desc, const Faculty& fac)
    : project_id(projectId), title(t), description(desc), faculty_supervisor(fac) {}

// Destructor
Project::~Project() {}

// Getter methods
int Project::get_project_id() const {
    return project_id;
}

string Project::get_title() const {
    return title;
}

string Project::get_description() const {
    return description;
}

// Setter methods
void Project::set_project_id(int projectId) {
    project_id = projectId;
}

void Project::set_title(const string& t) {
    title = t;
}

void Project::set_description(const string& desc) {
    description = desc;
}

void Project::write_project_to_csv(const Project& pro, const string& filename)
{
    ofstream file(filename, ios::app); // Open the file in append mode to avoid overwriting existing content
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current project
    file << pro.get_project_id() << ",";
    file << pro.get_title() << ",";
    file << pro.get_description() << ",";

    // Write faculty supervisor
    file << pro.faculty_supervisor.get_faculty_id() << ":" << pro.faculty_supervisor.get_name() << ",";

    // Write students involved
    for (const auto& student : pro.students) {
        file << student.get_student_id() << ":" << student.get_name() << ",";
    }
    file << endl;

    file.close();
}

void Project::display_project_details()
{
    cout << "\n\n********************************************************************\n";
    cout << "           Project ID: " << project_id << endl;
    cout << "           Title: " << title << endl;
    cout << "           Description: " << description << endl;
    cout << "           Faculty Supervisor: " << faculty_supervisor.get_name() << " (ID: " << faculty_supervisor.get_faculty_id() << ")" << endl;
    cout << "           Students Involved:" << endl;
    for (const auto& student : students) {
        cout << "  - " << student.get_name() << " (ID: " << student.get_student_id() << ")" << endl;
    }
    cout << "\n********************************************************************\n\n";
}

void Project::checkProject()
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

    // Create faculty objects
    Faculty f1(1, "Dr.AbdulQadeerKhan", "aqkhan@example.com", "+923331234567");
    Faculty f2(2, "Dr.Atta-ur-Rahman", "attaur@example.com", "+923217654321");
    Faculty f3(3, "Dr.PervezHoodbhoy", "phoodbhoy@example.com", "+923009876543");
    Faculty f4(4, "Dr.HafeezHoorani", "hhoorani@example.com", "+923458765432");
    Faculty f5(5, "Dr.SamarMubarakmand", "smubarakmand@example.com", "+923332345678");

    // Create project objects
    Project pro1(1, "Project 1", "Description 1", f1);
    Project pro2(2, "Project 2", "Description 2", f2);
    Project pro3(3, "Project 3", "Description 3", f3);
    Project pro4(4, "Project 4", "Description 4", f4);
    Project pro5(5, "Project 5", "Description 5", f5);
    pro1.add_student_in_project(s1);
    pro1.add_student_in_project(s9);

    pro2.add_student_in_project(s3);

    pro3.add_student_in_project(s2);
    pro3.add_student_in_project(s6);

    pro4.add_student_in_project(s5);
    pro4.add_student_in_project(s10);
    pro4.add_student_in_project(s12);

    pro5.add_student_in_project(s4);
    pro5.add_student_in_project(s7);
    pro5.add_student_in_project(s8);
    pro5.add_student_in_project(s11);
    pro5.add_student_in_project(s13);
    pro5.add_student_in_project(s14);



    // Vector of projects
    vector<Project> projects = { pro1, pro2, pro3, pro4, pro5 };

    // Write project data to CSV file
    for (auto& project : projects) {
        Project::write_project_to_csv(project, "projects.csv");
    }

    // Display project details
    for (auto& project : projects) {
        project.display_project_details();
    }
}

void Project::add_student_in_project(const Student& stu)
{
    students.push_back(stu);
}

void Project::Student_menu() {
    int choice;
    cout << "\n         WELCOME TO PROJECT'S STUDENT SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << title << " , ID:" << project_id << endl;
    cout << "\n\n\n1.   ADD STUDENT\n";
    cout << "\n2.   DISPLAY PROJECT INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int student_id;
        string student_name, student_email, student_phone;

        cout << "\nEnter student ID: ";
        cin >> student_id;
        cout << "Enter student name: ";
        cin >> student_name;
        cout << "Enter student email: ";
        cin >> student_email;
        cout << "Enter student phone: ";
        cin >> student_phone;

        Student new_student(student_id, student_name, student_email, student_phone);
        add_student_in_project(new_student);
        cout << "\nStudent added successfully!" << endl;
    }
    else if (choice == 2) {
        // Display project information
        display_project_details();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}



