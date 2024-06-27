#include "FacultyCourseAllocation.h"

// Default constructor
FacultyCourseAllocation::FacultyCourseAllocation() : allocation_id(0), faculty_id(0), course_id(0), semester("") {}

FacultyCourseAllocation::FacultyCourseAllocation(int allocationId, int facultyId, int courseId, const string& semester, const Faculty& fac, const Course& cou)
    : allocation_id(allocationId), faculty_id(facultyId), course_id(courseId), semester(semester),faculty(fac),course(cou) {}



// Destructor
FacultyCourseAllocation::~FacultyCourseAllocation() {}

// Getter methods
int FacultyCourseAllocation::get_allocation_id() const {
    return allocation_id;
}

int FacultyCourseAllocation::get_faculty_id() const {
    return faculty_id;
}

int FacultyCourseAllocation::get_course_id() const {
    return course_id;
}

string FacultyCourseAllocation::get_semester() const {
    return semester;
}

// Setter methods
void FacultyCourseAllocation::set_allocation_id(int allocationId) {
    allocation_id = allocationId;
}

void FacultyCourseAllocation::set_faculty_id(int facultyId) {
    faculty_id = facultyId;
}

void FacultyCourseAllocation::set_course_id(int courseId) {
    course_id = courseId;
}

void FacultyCourseAllocation::set_semester(const string& sem) {
    semester = sem;
}

void FacultyCourseAllocation::write_Faculty_Course_data_to_csv(FacultyCourseAllocation& fca, const string& filename) {
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current faculty course allocation
    file << fca.allocation_id << ",";
    file << fca.faculty_id << ",";
    file << fca.course_id << ",";
    file << fca.semester << endl;

    file.close();
}

void FacultyCourseAllocation::display_Faculty_Course_info() {
    cout << "\n--------------------------------------------------------\n";
    cout << "\nALLOCATION_ID: " << allocation_id << endl;
    cout << "\nFACULTY_ID: " << faculty.get_faculty_id() << endl;
    cout << "\nCOURSE_ID: " << course.get_course_id() << endl;
    cout << "\nSEMESTER: " << semester << endl;
    cout << "\n--------------------------------------------------------\n";
}

void FacultyCourseAllocation::checkFaculty_Course() {
    Faculty f1(1, "Dr.AbdulQadeerKhan", "aqkhan@example.com", "+923331234567");
    Faculty f2(2, "Dr.Atta-ur-Rahman", "attaur@example.com", "+923217654321");
    Faculty f3(3, "Dr.PervezHoodbhoy", "phoodbhoy@example.com", "+923009876543");
    Faculty f4(4, "Dr.HafeezHoorani", "hhoorani@example.com", "+923458765432");
    Faculty f5(5, "Dr.SamarMubarakmand", "smubarakmand@example.com", "+923332345678");

    Course c1(123, "CALCULUS", 3, "MARIAM");
    Course c2(124, "Physics", 4, "Dr_Rafique_Ahmed");
    Course c3(125, "Computer_Science", 3, "Prof_Farhan_Khan");
    Course c4(126, "Chemistry", 3, "Dr._Aisha_Khan");
    Course c5(127, "Biology", 3, "Prof._Ali_Raza");
    Course c6(128, "English_Literature", 2, "Ms._Sana_Malik");

    Date d1(2023, 12, 6);
    Date d2(2024, 2, 10);
    Date d3(2024, 5, 1);

    FacultyCourseAllocation fca1(1, 1, 123, "Spring", f1, c1);
    FacultyCourseAllocation fca2(2, 2, 124, "Fall", f2, c2);
    FacultyCourseAllocation fca3(3, 3, 125, "Spring", f3, c3);
    FacultyCourseAllocation fca4(4, 4, 126, "Fall", f4, c4);
    FacultyCourseAllocation fca5(5, 5, 127, "Spring", f5, c5);
    FacultyCourseAllocation fca6(6, 1, 128, "Fall", f1, c6);

    vector<FacultyCourseAllocation> allocations = { fca1, fca2, fca3, fca4, fca5, fca6 };

    // Write faculty course allocation data to CSV file
    for (auto& allocation : allocations) {
        FacultyCourseAllocation::write_Faculty_Course_data_to_csv(allocation, "faculty_course_allocations.csv");
    }

    // Display faculty course allocation details
    for (auto& allocation : allocations) {
        allocation.display_Faculty_Course_info();
    }
}

void FacultyCourseAllocation::Faculty_Course_menu() {
    int choice;
    cout << "\n         WELCOME TO FACULTY COURSE ALLOCATION SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << allocation_id << endl;
    cout << "\n\n\n1.   DISPLAY FACULTY COURSE ALLOCATION INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Display faculty course allocation information
        display_Faculty_Course_info();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}


