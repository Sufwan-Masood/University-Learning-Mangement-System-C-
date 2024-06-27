#include <iostream>
#include"Assignment.h"
#include"Attendance.h"
#include"Club.h"
#include "Course.h"
#include "Date.h"
#include "Department.h"
#include"Enrollment.h"
#include"Event.h"
#include"Faculty.h"
#include "FacultyCourseAllocation.h"
#include"Feedback.h"
#include  "Grade.h"
#include "LibraryResourse.h"
#include  "Project.h"
#include  "Student.h"
#include <iomanip>
#define RESET   "\033[0m"
#define RED_BG  "\033[41m"
#define GREEN_BG  "\033[42m"
#define YELLOW_BG  "\033[43m"
#define BLUE_BG  "\033[44m"
#define MAGENTA_BG  "\033[45m"
#define CYAN_BG  "\033[46m"
#define WHITE_BG  "\033[47m"
using namespace std;
int main() {
   
    // Create assignments
    Date d1(2023, 12, 6);
    Date d2(2024, 2, 10);
    Date d3(2024, 5, 1);

    vector<Student> students;
    vector<Course> courses;
    vector<Faculty>faculty;
    vector<Department>department;
    vector <Club>club;
    vector <Assignment>assignment;
    vector <Enrollment>enrollment;
    vector <FacultyCourseAllocation>faculty_course;
    vector <Grade> grades;
    vector<LibraryResource> libraryResources;
    vector <Attendance> attendances;
    vector<Event>events;
    vector <Project>projects;
    vector <Feedback>feedbacks;

   
    Department dep1(1, "Department_of_Mathematics", "Dr.Ali_Khan");
    Department dep2(2, "Department_of_Physics", "Dr.Sara_Ahmed");
    Department dep3(3, "Department_of_Computer_Science", "Dr.Usman_Ali");
    Department dep4(4, "Department_of_Chemistry", "Dr.Ayesha_Khan");
    Department dep5(5, "Department_of_Biology", "Dr.Amir_Malik");

    LibraryResource book1(1, "Pakistan's_Politics", "Husain_Mahmood", true);
    LibraryResource book2(2, "National-Arts", "Iqbal_Baham", false);
    LibraryResource book3(3, "Pakistan's_Land", "Faiz_Ahmed_Faiz", true);
    LibraryResource book4(4, "Poets_of_Pakistan", "Ashfaq_Ahmed", true);
    LibraryResource book5(5, "Dream_of_Pakistan", "Muhammad_Ali_Jinnah", false);
    LibraryResource book6(6, "Prominent_Pakistani_Writers", "Saadat_Hasan_Manto", true);
    LibraryResource book7(7, "History_of_Pakistan", "Obaid_Rahman_Sarwar", true);
    LibraryResource book8(8, "Literature_of_Pakistan", "Sehr_Saleem", false);
    LibraryResource book9(9, "Epics_of_Pakistan", "Qudrat_Ullah_Shahab", true);
    LibraryResource book10(10, "Ancient_Poets_of_Pakistan", "Allama_Iqbal", true);

    libraryResources.push_back(book1);
    libraryResources.push_back(book2);
    libraryResources.push_back(book3);
    libraryResources.push_back(book4);
    libraryResources.push_back(book5);
    libraryResources.push_back(book6);
    libraryResources.push_back(book7);
    libraryResources.push_back(book8);
    libraryResources.push_back(book9);
    libraryResources.push_back(book10);

    Faculty f1(1, "Dr.AbdulQadeerKhan", "aqkhan@example.com", "+923331234567");
    Faculty f2(2, "Dr.Atta-ur-Rahman", "attaur@example.com", "+923217654321");
    Faculty f3(3, "Dr.PervezHoodbhoy", "phoodbhoy@example.com", "+923009876543");
    Faculty f4(4, "Dr.HafeezHoorani", "hhoorani@example.com", "+923458765432");
    Faculty f5(5, "Dr.SamarMubarakmand", "smubarakmand@example.com", "+923332345678");
    

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

    attendances.push_back(att1);
    attendances.push_back(att2);
    attendances.push_back(att3);
    attendances.push_back(att4);
    attendances.push_back(att5);
    attendances.push_back(att6);
    attendances.push_back(att7);
    attendances.push_back(att8);
    attendances.push_back(att9);
    attendances.push_back(att10);
    attendances.push_back(att11);
    attendances.push_back(att12);
    attendances.push_back(att13);
    attendances.push_back(att14);

    FacultyCourseAllocation fca1(1, 1, 123, "Spring", f1, c1);
    FacultyCourseAllocation fca2(2, 2, 124, "Fall", f2, c2);
    FacultyCourseAllocation fca3(3, 3, 125, "Spring", f3, c3);
    FacultyCourseAllocation fca4(4, 4, 126, "Fall", f4, c4);
    FacultyCourseAllocation fca5(5, 5, 127, "Spring", f5, c5);
    FacultyCourseAllocation fca6(6, 1, 128, "Fall", f1, c6);


    faculty_course.push_back(fca1);
    faculty_course.push_back(fca2);
    faculty_course.push_back(fca3);
    faculty_course.push_back(fca4);
    faculty_course.push_back(fca5);
    faculty_course.push_back(fca6);

    
    Enrollment e1{ 1, 1, 123, d1, s1, c1 };
    Enrollment e2{ 2, 2, 124, d1, s2, c2 };
    Enrollment e3{ 3, 3, 125, d1, s3, c3 };
    Enrollment e4{ 4, 4, 126, d1, s4, c4 };
    Enrollment e5{ 5, 5, 127, d1, s5, c5 };
    Enrollment e6{ 6, 6, 128, d1, s6, c6 };
    Enrollment e7{ 7, 7, 123, d2, s7, c1 };
    Enrollment e8{ 8, 8, 124, d2, s8, c2 };
    Enrollment e9{ 9, 9, 125, d2, s9, c3 };
    Enrollment e10{ 10, 10, 126, d2, s10, c4 };
    Enrollment e11{ 11, 11, 127, d2, s11, c5 };
    Enrollment e12{ 12, 12, 128, d2, s12, c6 };
    Enrollment e13{ 13, 13, 123, d3, s13, c1 };
    Enrollment e14{ 14, 14, 124, d3, s14, c2 };



    Grade g1(1, 1, 123, "A", s1, c1);
    Grade g2(2, 2, 124, "B+", s2, c2);
    Grade g3(3, 3, 125, "B", s3, c3);
    Grade g4(4, 4, 126, "C", s4, c4);
    Grade g5(5, 5, 127, "A-", s5, c5);
    Grade g6(6, 6, 128, "B+", s6, c6);
    Grade g7(7, 7, 123, "B", s7, c1);
    Grade g8(8, 8, 124, "C+", s8, c2);
    Grade g9(9, 9, 125, "A", s9, c3);
    Grade g10(10, 10, 126, "B-", s10, c4);
    Grade g11(11, 11, 127, "A", s11, c5);
    Grade g12(12, 12, 128, "C", s12, c6);
    Grade g13(13, 13, 123, "B+", s13, c1);
    Grade g14(14, 14, 124, "A-", s14, c2);
    grades.push_back(g1);
    grades.push_back(g2);
    grades.push_back(g3);
    grades.push_back(g4);
    grades.push_back(g5);
    grades.push_back(g6);
    grades.push_back(g7);
    grades.push_back(g8);
    grades.push_back(g9);
    grades.push_back(g10);
    grades.push_back(g11);
    grades.push_back(g12);
    grades.push_back(g13);
    grades.push_back(g14);


    enrollment.push_back(e1);
    enrollment.push_back(e2);
    enrollment.push_back(e3);
    enrollment.push_back(e4);
    enrollment.push_back(e5);
    enrollment.push_back(e6);
    enrollment.push_back(e7);
    enrollment.push_back(e8);
    enrollment.push_back(e9);
    enrollment.push_back(e10);
    enrollment.push_back(e11);
    enrollment.push_back(e12);
    enrollment.push_back(e13);
    enrollment.push_back(e14);
    
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


    faculty.push_back(f1);
    faculty.push_back(f2);
    faculty.push_back(f3);
    faculty.push_back(f4);
    faculty.push_back(f5);


    Assignment a1(11, 123, d1, "semesterEND");
    Assignment a2(12, 124, d2, "Midterm_Exam");
    Assignment a3(13, 125, d3, "Programming_Project");
    Assignment a4(14, 126, d1, "Lab_Report");
    Assignment a5(15, 127, d2, "Essay");
    Assignment a6(16, 128, d3, "Final_Project");
    assignment.push_back(a1);
    assignment.push_back(a2);
    assignment.push_back(a3);
    assignment.push_back(a4);
    assignment.push_back(a5);
    assignment.push_back(a6);

    c1.add_assignment(a1);
    c1.add_assignment(a2);
    c2.add_assignment(a2);
    c2.add_assignment(a3);
    c3.add_assignment(a3);
    c3.add_assignment(a4);
    c4.add_assignment(a4);
    c4.add_assignment(a5);
    c5.add_assignment(a5);
    c5.add_assignment(a6);
    c6.add_assignment(a6);
    c6.add_assignment(a1);



    courses.push_back(c1);
    courses.push_back(c2);
    courses.push_back(c3);
    courses.push_back(c4);
    courses.push_back(c5);
    courses.push_back(c6);
    
    

    projects.push_back(pro1);
    projects.push_back(pro2);
    projects.push_back(pro3);
    projects.push_back(pro4);
    projects.push_back(pro5);
   

    Feedback fb1(1, "Great_course!", 5, s1, c1);
    Feedback fb2(2, "Interesting_topics!", 4, s2, c2);
    Feedback fb3(3, "Enjoyed_lectures!", 4, s3, c3);
    Feedback fb4(4, "Needs_improvement.", 3, s4, c4);
    Feedback fb5(5, "Very_informative!", 5, s5, c5);
    Feedback fb6(6, "Engaging_discussions.", 4, s6, c6);
    Feedback fb7(7, "Challenging_assignments.", 4, s7, c1);
    Feedback fb8(8, "Helpful_instructor.", 5, s8, c2);
    Feedback fb9(9, "Clear_explanations.", 5, s9, c3);
    Feedback fb10(10, "Interesting_experiments.", 4, s10, c4);
    Feedback fb11(11, "Good_material.", 4, s11, c5);
    Feedback fb12(12, "Interactive_sessions.", 5, s12, c6);
    Feedback fb13(13, "Inspiring_lectures.", 5, s13, c1);
    Feedback fb14(14, "Interesting_readings.", 4, s14, c2);



    feedbacks.push_back(fb1);
    feedbacks.push_back(fb2);
    feedbacks.push_back(fb3);
    feedbacks.push_back(fb4);
    feedbacks.push_back(fb5);
    feedbacks.push_back(fb6);
    feedbacks.push_back(fb7);
    feedbacks.push_back(fb8);
    feedbacks.push_back(fb9);
    feedbacks.push_back(fb10);
    feedbacks.push_back(fb11);
    feedbacks.push_back(fb12);
    feedbacks.push_back(fb13);
    feedbacks.push_back(fb14);



    Club Cl1(661, "MLSA", "MICROSOFT");
    Club Cl2(662, "PAK_NS", "NISHAT");
    Club Cl3(663, "TEDx", "UET_KSK");
    Club Cl4(664, "Debating_Club", "UET_Lahore");
    Club Cl5(665, "Programming_Club", "FAST");
    Club Cl6(666, "Photography_Club", "NUST");


    Event event1(101, "Chess_Tournament", "Annual_chess", Date(2024, 4, 30), "Chess_Hall");
    Event event2(102, "Drama_Workshop", "Interactive_drama", Date(2024, 5, 15), "Auditorium");
    Event event3(103, "Music_Concert", "Annual_music", Date(2024, 6, 1), "Concert_Hall");
    Event event4(104, "Debate_Competition", "Inter-university_debate", Date(2024, 6, 20), "Debate_Hall");
    Event event5(105, "Photography_Exhibition", "Student_photography", Date(2024, 7, 5), "Gallery");

    events.push_back(event1);
    events.push_back(event2);
    events.push_back(event3);
    events.push_back(event4);
    events.push_back(event5);

    Cl1.organize_event(event1);
    Cl2.organize_event(event2);
    Cl3.organize_event(event3);
    Cl4.organize_event(event4);
    Cl5.organize_event(event5);
    Cl6.organize_event(event3);


    s1.enroll_in_course(c1);
    s1.enroll_in_course(c2);
    s1.enroll_in_course(c3);

    s2.enroll_in_course(c1);
    s2.enroll_in_course(c4);

    s3.enroll_in_course(c2);
    s3.enroll_in_course(c5);

    s4.enroll_in_course(c3);
    s4.enroll_in_course(c6);

    s5.enroll_in_course(c4);
    s5.enroll_in_course(c5);

    s6.enroll_in_course(c6);
    s6.enroll_in_course(c1);

    s7.enroll_in_course(c2);
    s7.enroll_in_course(c3);

    s8.enroll_in_course(c4);
    s8.enroll_in_course(c5);

    s9.enroll_in_course(c6);
    s9.enroll_in_course(c1);

    s10.enroll_in_course(c2);
    s10.enroll_in_course(c3);








    s1.submit_assignment(a1);
    s1.submit_assignment(a2);
    s1.submit_assignment(a3);

    s2.submit_assignment(a4);
    s2.submit_assignment(a5);
    s2.submit_assignment(a6);

    s3.submit_assignment(a1);
    s3.submit_assignment(a2);
    s3.submit_assignment(a3);

    s4.submit_assignment(a4);
    s4.submit_assignment(a5);
    s4.submit_assignment(a6);

    s5.submit_assignment(a1);
    s5.submit_assignment(a2);
    s5.submit_assignment(a3);

    s6.submit_assignment(a4);
    s6.submit_assignment(a5);
    s6.submit_assignment(a6);

    s7.submit_assignment(a1);
    s7.submit_assignment(a2);
    s7.submit_assignment(a3);

    s8.submit_assignment(a4);
    s8.submit_assignment(a5);
    s8.submit_assignment(a6);

    s9.submit_assignment(a1);
    s9.submit_assignment(a2);
    s9.submit_assignment(a3);

    s10.submit_assignment(a4);
    s10.submit_assignment(a5);
    s10.submit_assignment(a6);











    s1.join_club(Cl1);
    s1.join_club(Cl2);
    s1.join_club(Cl3);

    s2.join_club(Cl4);
    s2.join_club(Cl5);
    s2.join_club(Cl6);

    s3.join_club(Cl1);
    s3.join_club(Cl2);
    s3.join_club(Cl3);

    s4.join_club(Cl4);
    s4.join_club(Cl5);
    s4.join_club(Cl6);

    s5.join_club(Cl1);
    s5.join_club(Cl2);
    s5.join_club(Cl3);

    s6.join_club(Cl4);
    s6.join_club(Cl5);
    s6.join_club(Cl6);

    s7.join_club(Cl1);
    s7.join_club(Cl2);
    s7.join_club(Cl3);

    s8.join_club(Cl4);
    s8.join_club(Cl5);
    s8.join_club(Cl6);

    s9.join_club(Cl1);
    s9.join_club(Cl2);
    s9.join_club(Cl3);

    s10.join_club(Cl4);
    s10.join_club(Cl5);
    s10.join_club(Cl6);






    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    students.push_back(s4);
    students.push_back(s5);
    students.push_back(s6);
    students.push_back(s7);
    students.push_back(s8);
    students.push_back(s9);
    students.push_back(s10);
    students.push_back(s11);
    students.push_back(s12);
    students.push_back(s13);
    students.push_back(s14);

    


    dep1.add_course(c1);
    dep2.add_course(c2);
    dep3.add_course(c3);
    dep4.add_course(c4);
    dep5.add_course(c5);

    // Add faculty members to departments
    dep1.add_faculty(f1);
    dep2.add_faculty(f2);
    dep3.add_faculty(f3);
    dep4.add_faculty(f4);
    dep5.add_faculty(f5);

    department.push_back(dep1);
    department.push_back(dep2);
    department.push_back(dep3);
    department.push_back(dep4);
    department.push_back(dep5);

    club.push_back(Cl1);
    club.push_back(Cl2);
    club.push_back(Cl3);
    club.push_back(Cl4);
    club.push_back(Cl5);
    club.push_back(Cl6);





    {

        //bool continueLoop = true;
        //int choice;

        //cout << "\033[1;33m"; // Yellow color for the welcome message
        //cout << "\n\n\t\t\t-------WELCOME TO UNIVERSITY MANAGEMENT SYSTEM-------\n";
        //cout << "\033[0m"; // Reset color to default

        //while (continueLoop) {
        //    cout << "\n\n\033[1;36m"; // Cyan color for menu options
        //    cout << "\n\t\t\t--------MENU--------\n";
        //    cout << "\033[0m"; // Reset color to default
        //    cout << "\n\033[1;34m"; // Blue color for menu options
        //    cout << "\n\t\t\t1. CHECK WORKING OF STUDENT";
        //    cout << "\n\t\t\t2. STUDENTS";
        //    cout << "\n\t\t\t3. CHECK WORKING OF COURSES";
        //    cout << "\n\t\t\t4. COURSES";
        //    cout << "\n\t\t\t5. CHECK WORKING OF FACULTY";
        //    cout << "\n\t\t\t6. FACULTY";
        //    cout << "\n\t\t\t7. CHECK WORKING OF DEPARTMENT";
        //    cout << "\n\t\t\t8. DEPARTMENT";
        //    cout << "\n\t\t\t9. CHECK WORKING OF CLUB";
        //    cout << "\n\t\t\t10. CLUB";
        //    cout << "\n\t\t\t11. CHECK WORKING OF ASSIGNMENT/EXAM";
        //    cout << "\n\t\t\t12. ASSIGNMENT/EXAM";
        //    cout << "\n\t\t\t13. CHECK WORKING OF ENROLLMENT";
        //    cout << "\n\t\t\t14. ENROLLMENT";
        //    cout << "\n\t\t\t19. ADMIN";
        //    cout << "\n\t\t\t20. EXIT\n";
        //    cout << "\033[0m"; // Reset color to default
        //    cout << "\n\033[1;32m"; // Green color for input prompt
        //    cout << "\n\t\t\tENTER YOUR CHOICE: ";
        //    cout << "\033[0m"; // Reset color to default

        //    cin >> choice;

        //    switch (choice) {
        //    case 1:
        //        // Call the checkSTUDENT function for the first student
        //        students[0].checkSTUDENT();
        //        break;
        //    case 2: {
        //        int id;
        //        bool found = false;

        //        // Prompt user to enter student ID
        //        cout << "\nENTER STUDENT ID: ";
        //        cin >> id;

        //        // Search for the student with the entered ID
        //        for (const auto& student : students) {
        //            if (id == student.get_student_id()) {
        //                cout << "\nSUCCESSFULLY LOGGED IN\n";
        //                found = true;
        //                students[id].Student_menu();
        //                break;
        //            }
        //        }

        //        // If student with the entered ID is not found, ask user to try again
        //        if (!found) {
        //            cout << "\nSTUDENT NOT FOUND, PLEASE TRY AGAIN\n";
        //        }
        //        break;
        //    }
        //    case 3: {
        //        courses[0].checkCOURSE(); // Assuming you want to use the first student to access the course menu
        //        break;
        //    }
        //    case 4: {
        //        int course_id;
        //        cout << "\nEnter Course ID: ";
        //        cin >> course_id;

        //        // Search for the course with the entered ID
        //        bool found = false;
        //        for (auto& course : courses) {
        //            if (course_id == course.get_course_id()) {
        //                cout << "\nCourse Found!" << endl;

        //                course.Course_menu();
        //                found = true;
        //                break;
        //            }
        //        }

        //        // If course with the entered ID is not found, notify the user
        //        if (!found) {
        //            cout << "\nCourse not found. Please try again." << endl;
        //        }
        //        break;
        //    }
        //    case 5: {
        //        faculty[0].checkFACULTY(); // Assuming you want to use the first faculty member
        //        break;
        //    }
        //    case 6: {
        //        int faculty_id;
        //        cout << "\nEnter Faculty ID: ";
        //        cin >> faculty_id;

        //        // Search for the faculty member with the entered ID
        //        bool found = false;
        //        for (auto& faculty : faculty) {
        //            if (faculty_id == faculty.get_faculty_id()) {
        //                cout << "\nFaculty Found!" << endl;

        //                faculty.Faculty_menu();
        //                found = true;
        //                break;
        //            }
        //        }

        //        // If faculty with the entered ID is not found, notify the user
        //        if (!found) {
        //            cout << "\nFaculty not found. Please try again." << endl;
        //        }
        //        break;
        //    }
        //    case 7: {
        //        department[0].checkDepartment();
        //        break;
        //    }
        //    case 8: {
        //        int d_id;
        //        cout << "\nDEPARTMENT ID: ";
        //        cin >> d_id;

        //        // Search for the faculty member with the entered ID
        //        bool found = false;
        //        for (auto& f : department) {
        //            if (d_id == f.get_department_id()) {
        //                cout << "\nDEPARTMENT Found!" << endl;

        //                f.DepartmentMenu();
        //                found = true;
        //                break;
        //            }
        //        }


        //        if (!found) {
        //            cout << "\nDept. not found. Please try again." << endl;
        //        }
        //        break;
        //    }
        //    case 9: {
        //        club[0].checkCLUB();
        //        break;
        //    }
        //    case 10: {
        //        int c_id;
        //        cout << "\nCLUB ID: ";
        //        cin >> c_id;

        //        // Search for the club with the entered ID
        //        bool found = false;
        //        for (auto& c : club) {
        //            if (c_id == c.get_club_id()) {
        //                cout << "\nCLUB Found!" << endl;

        //                c.Club_menu();
        //                found = true;
        //                break;
        //            }
        //        }

        //        if (!found) {
        //            cout << "\nClub not found. Please try again." << endl;
        //        }
        //        break;

        //    }
        //    case 11: {
        //        assignment[0].checkAssignment();
        //        break;
        //    }
        //    case 12: {
        //        int a_id;
        //        cout << "\nASSIGNMENT ID: ";
        //        cin >> a_id;

        //        // Search for the assignment with the entered ID
        //        bool found = false;
        //        for (auto& a : assignment) {
        //            if (a_id == a.get_assignment_id()) {
        //                cout << "\nASSIGNMENT Found!" << endl;

        //                Assignment newAssignment = a.Club_menu();
        //                if (!newAssignment.is_empty()) { // Assuming is_empty() function checks if the assignment object is empty
        //                    assignment.push_back(newAssignment);
        //                }
        //                found = true;
        //                break;
        //            }
        //        }

        //        if (!found) {
        //            cout << "\nAssignment not found. Please try again." << endl;
        //        }
        //        break;
        //    }
        //    case 13: {
        //        enrollment[0].checkEnrollment();
        //        break;
        //    }
        //    case 14: {
        //        int e_id;
        //        cout << "\nENROLLMENT ID: ";
        //        cin >> e_id;

        //        // Search for the enrollment with the entered ID
        //        bool found = false;
        //        for (auto& e : enrollment) {
        //            if (e_id == e.get_enrollment_id()) {
        //                cout << "\nENROLLMENT Found!" << endl;

        //                e.Enrollment_menu();
        //                found = true;
        //                break;
        //            }
        //        }

        //        if (!found) {
        //            cout << "\nEnrollment not found. Please try again." << endl;
        //        }
        //        break;
        //    }

        //    case 19: {
        //        int admin_id;
        //        cout << "\nENTER ADMIN ACCESS ID:";
        //        cin >> admin_id;
        //        if (admin_id == 12345) {
        //            cout << "\n\t\t !! SUCCESSFULLY LOGGED IN AS ADMIN!! \n";
        //            Student t = students[0].Admin_menu(students); // Assuming you want to use the first student to access the admin menu
        //            students.push_back(t);
        //        }
        //        else {
        //            cout << "\nINVALID ADMIN ID\n";
        //        }
        //        break;
        //    }
        //    case 20:
        //        continueLoop = false;
        //        break;

        //    default:
        //        cout << "\033[1;31m"; // Red color for error message
        //        cout << "\n\t\t\tINVALID CHOICE, PLEASE TRY AGAIN\n";
        //        cout << "\033[0m"; // Reset color to default
        //        break;
        //    }
        //}
    }
    
    
    int choice;
    bool continueLoop = true;

   

    while (continueLoop) {
        //cout << "\n--------MENU---------\n";
        //cout << "\n1. CHECK WORKING OF STUDENT\n";
        //cout << "\n2. STUDENTS\n";
        //cout << "\n3. CHECK WORKING OF COURSES\n";
        //cout << "\n4. COURSES\n";
        //cout << "\n5. CHECK WORKING OF FACULTY\n"; 
        //cout << "\n6. FACULTY \n"; 
        //cout << "\n7. CHECK WORKING OF DEPARTMENT\n";
        //cout << "\n8. DEPARTMENT \n";
        //cout << "\n9. CHECK WORKING OF CLUB\n";
        //cout << "\n10. CLUB \n";
        //cout << "\n11. CHECK WORKING OF ASSIGNMENT/EXAM\n";
        //cout << "\n12. ASSIGNMENT/EXAM \n";
        //cout << "\n13. CHECK WORKING OF ENROLLMENT\n";
        //cout << "\n14. ENROLLMENT \n";
        //cout << "\n15. CHECK WORKING OF FACULTY_COURSE_ALLOCATION\n";
        //cout << "\n16. FACULTY_COURSE_ALLOCATION \n";
        //cout << "\n17. CHECK WORKING OF GRADES\n";
        //cout << "\n18. GRADE \n";
        //cout << "\n19. CHECK WORKING OF LIBRARY RESOURCE\n";
        //cout << "\n20. LIBRARY RESOURCE \n";
        //cout << "\n21. CHECK WORKING OF ATTENDANCE\n";
        //cout << "\n22. ATTENDANCE \n";
        //cout << "\n23. CHECK WORKING OF EVENT\n";
        //cout << "\n24. EVENT \n";
        //cout << "\n25. CHECK WORKING OF PROJECT\n";
        //cout << "\n26. PROJECT \n";
        //cout << "\n27. CHECK WORKING OF FEEDBACK\n";
        //cout << "\n28. FEEDBACK \n";
        //cout << "\n29. ADMIN\n";
        //cout << "\n30. EXIT\n"; // Adjusted option numbering
        //cout << "\nENTER YOUR CHOICE: ";
        //cin >> choice;
      

       
        cout << "\033[1;36m"; 
        cout <<RED_BG <<"\n\t\t\t-------WELCOME TO UNIVERSITY MANAGEMENT SYSTEM-------\n";
        cout << "\033[0m"; 

       
        cout << "\n\033[1;34m"; 
        cout << "\n\t\t\t           1. CHECK WORKING OF STUDENT";
        cout << "\n\t\t\t           2. STUDENTS\n";
        cout << "\n\t\t\t           3. CHECK WORKING OF COURSES";
        cout << "\n\t\t\t           4. COURSES\n";
        cout << "\n\t\t\t           5. CHECK WORKING OF FACULTY";
        cout << "\n\t\t\t           6. FACULTY\n";
        cout << "\n\t\t\t           7. CHECK WORKING OF DEPARTMENT";
        cout << "\n\t\t\t           8. DEPARTMENT\n";
        cout << "\n\t\t\t           9. CHECK WORKING OF CLUB";
        cout << "\n\t\t\t           10. CLUB\n";
        cout << "\n\t\t\t           11. CHECK WORKING OF ASSIGNMENT/EXAM";
        cout << "\n\t\t\t           12. ASSIGNMENT/EXAM\n";
        cout << "\n\t\t\t           13. CHECK WORKING OF ENROLLMENT";
        cout << "\n\t\t\t           14. ENROLLMENT\n";
        cout << "\n\t\t\t           15. CHECK WORKING OF FACULTY_COURSE_ALLOCATION";
        cout << "\n\t\t\t           16. FACULTY_COURSE_ALLOCATION\n";
        cout << "\n\t\t\t           17. CHECK WORKING OF GRADES";
        cout << "\n\t\t\t           18. GRADE\n";
        cout << "\n\t\t\t           19. CHECK WORKING OF LIBRARY RESOURCE";
        cout << "\n\t\t\t           20. LIBRARY RESOURCE\n";
        cout << "\n\t\t\t           21. CHECK WORKING OF ATTENDANCE";
        cout << "\n\t\t\t           22. ATTENDANCE\n";
        cout << "\n\t\t\t           23. CHECK WORKING OF EVENT";
        cout << "\n\t\t\t           24. EVENT\n";
        cout << "\n\t\t\t           25. CHECK WORKING OF PROJECT";
        cout << "\n\t\t\t           26. PROJECT\n";
        cout << "\n\t\t\t           27. CHECK WORKING OF FEEDBACK";
        cout << "\n\t\t\t           28. FEEDBACK\n";
        cout << "\n\t\t\t           29. ADMIN(STUDENT)\n";
        cout << "\n\t\t\t           30. ADMIN(GENERAL)\n";
        cout << "\n\t\t\t           40. EXIT\n";
        cout << "\033[0m"; 

        
        cout << "\n\033[1;32m"; 
        cout << "\n\t\t\tENTER YOUR CHOICE: ";
        cout << "\033[0m";    
        cin >> choice;
        switch (choice) {
        case 1:
          
            students[0].checkSTUDENT();
            break;
        case 2: {
            int id;
            bool found = false;

            
            cout << "\nENTER STUDENT ID: ";
            cin >> id;

          
            for (const auto& student : students) {
                if (id == student.get_student_id()) {
                    cout << "\nSUCCESSFULLY LOGGED IN\n";
                    found = true;
                    students[id].Student_menu();
                    break;
                }
            }

            
            if (!found) {
                cout << "\nSTUDENT NOT FOUND, PLEASE TRY AGAIN\n";
            }
            break;
        }
        case 3: {
            courses[0].checkCOURSE(); 
            break;
        }
        case 4: {
            int course_id;
            cout << "\nEnter Course ID: ";
            cin >> course_id;

           
            bool found = false;
            for (auto& course : courses) {
                if (course_id == course.get_course_id()) {
                    cout << "\nCourse Found!" << endl;

                    course.Course_menu();
                    found = true;
                    break;
                }
            }

          
            if (!found) {
                cout << "\nCourse not found. Please try again." << endl;
            }
            break;
        }
        case 5: {
            faculty[0].checkFACULTY(); 
            break;
        }
        case 6: {
            int faculty_id;
            cout << "\nEnter Faculty ID: ";
            cin >> faculty_id;

           
            bool found = false;
            for (auto& faculty : faculty) {
                if (faculty_id == faculty.get_faculty_id()) {
                    cout << "\nFaculty Found!" << endl;

                    faculty.Faculty_menu();
                    found = true;
                    break;
                }
            }

          
            if (!found) {
                cout << "\nFaculty not found. Please try again." << endl;
            }
            break;
        }
        case 7: {
            department[0].checkDepartment(); 
            break;
        }
        case 8: {
            int d_id;
            cout << "\nDEPARTMENT ID: ";
            cin >> d_id;

         
            bool found = false;
            for (auto& f : department) {
                if (d_id == f.get_department_id()) {
                    cout << "\nDEPARTMENT Found!" << endl;

                    f.DepartmentMenu();
                    found = true;
                    break;
                }
            }

            
            if (!found) {
                cout << "\nDept. not found. Please try again." << endl;
            }
            break;
        }
        case 9: {
            club[0].checkCLUB();
            break;
        }
        case 10: {
            int c_id;
            cout << "\nCLUB ID: ";
            cin >> c_id;

          
            bool found = false;
            for (auto& c : club) {
                if (c_id == c.get_club_id()) {
                    cout << "\nCLUB Found!" << endl;

                    c.Club_menu();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nClub not found. Please try again." << endl;
            }
            break;

        }
        case 11: {
            assignment[0].checkAssignment();
            break;
        }
        case 12: {
            int a_id;
            cout << "\nASSIGNMENT ID: ";
            cin >> a_id;

           
            bool found = false;
            for (auto& a : assignment) {
                if (a_id == a.get_assignment_id()) {
                    cout << "\nASSIGNMENT Found!" << endl;

                    Assignment newAssignment = a.Club_menu();
                    if (!newAssignment.is_empty()) { 
                        assignment.push_back(newAssignment);
                    }
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nAssignment not found. Please try again." << endl;
            }
            break;
        }
        case 13: {
            enrollment[0].checkEnrollment();
            break;
        }
        case 14: {
            int e_id;
            cout << "\nENROLLMENT ID: ";
            cin >> e_id;

         
            bool found = false;
            for (auto& e : enrollment) {
                if (e_id == e.get_enrollment_id()) {
                    cout << "\nENROLLMENT Found!" << endl;

                    e.Enrollment_menu();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nEnrollment not found. Please try again." << endl;
            }
            break;
        }

        case 15: {
           
            faculty_course[0].checkFaculty_Course();
            break;
        }
        case 16: {
            int fca_id;
            cout << "\nFACULTY COURSE ALLOCATION ID: ";
            cin >> fca_id;

           
            bool found = false;
            for (auto& fca : faculty_course) {
                if (fca_id == fca.get_allocation_id()) {
                    cout << "\nFACULTY COURSE ALLOCATION Found!" << endl;

                    fca.Faculty_Course_menu();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nFaculty course allocation not found. Please try again." << endl;
            }
            break;
        }

        case 17: {
           
            grades[0].checkGrade();
            break;
        }

        case 18: {
            int grade_id;
            cout << "\nGRADE ID: ";
            cin >> grade_id;

           
            bool found = false;
            for (auto& g : grades) {
                if (grade_id == g.get_grade_id()) {
                    cout << "\nGRADE Found!" << endl;

                    g.Grademenu();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nGrade not found. Please try again." << endl;
            }
            break;
        }
        case 19: {

            libraryResources[0].checkLibrary();
            break;
        }

        case 20: {
            int resource_id;
            cout << "\nRESOURCE ID: ";
            cin >> resource_id;

            bool found = false;
            for (auto& lib : libraryResources) {
                if (resource_id == lib.get_resource_id()) {
                    cout << "\nLIBRARY RESOURCE Found!" << endl;

                    lib.Library_menu();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nLibrary resource not found. Please try again." << endl;
            }
            break;
        }

        case 21: {
            attendances[0].checkAttendance();
            break;
        }
        case 22: {
            int attendance_id;
            cout << "\nATTENDANCE ID: ";
            cin >> attendance_id;

            bool found = false;
            for (auto& att : attendances) {
                if (attendance_id == att.get_attendance_id()) {
                    cout << "\nATTENDANCE RECORD Found!" << endl;

                    att.attendance_menu();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nAttendance record not found. Please try again." << endl;
            }
            break;
        }
        case 23: {
            events[0].check_event();
            break;
        }

        case 24: {
            int event_id;
            cout << "\nEVENT ID: ";
            cin >> event_id;

            bool found = false;
            for (auto& eve : events) {
                if (event_id == eve.get_event_id()) {
                    cout << "\nEVENT Found!" << endl;

                    eve.event_menu();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nEvent not found. Please try again." << endl;
            }
            break;
        }
        case 25: {
            projects[0].checkProject();
            break;
        }
        case 26: {
            int project_id;
            cout << "\nPROJECT ID: ";
            cin >> project_id;

            bool found = false;
            for (auto& p : projects) {
                if (project_id == p.get_project_id()) {
                    cout << "\nPROJECT Found!" << endl;

                    p.Student_menu();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nProject not found. Please try again." << endl;
            }
            break;
        }

        case 27: {
            feedbacks[0].check_feedback();
            break;
        }

        case 28: {
            int feedback_id;
            cout << "\nFEEDBACK ID: ";
            cin >> feedback_id;

            bool found = false;
            for (auto& fb : feedbacks) {
                if (feedback_id == fb.get_feedback_id()) {
                   
                    string content;
                    int rating;
                    Student student;
                    Course course;
                    int cid;
                    cout << "\nFEEDBACK Found!" << endl;
                    cout << "\n\n\n   ADD FEEDBACK (press 1)\n";
                    int c;
                    cin >> c;
                    if (c == 1) {
                        cout << "\nENTER CONTENT: ";
                        cin >> content;
                        cout << "\nENTER RATING: ";
                        cin >> rating;
                        cout << "\nENTER COURSE ID: ";
                        cin >> cid;
                        if (cid < 1 || cid > 6) {
                            cout << "\nNOT FOUND !!";
                            break;
                        }
                        else {
                            Feedback add(feedback_id, content, rating, students[feedback_id], courses[cid]);
                            feedbacks.push_back(add);
                            cout << "\n     FEED BACK ADDED SUCCESSFULLY!";
                        }


                    }

                    fb.event_menu();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nFeedback not found. Please try again." << endl;
            }
            break;
        }
          


        case 29: {
            int admin_id;
            cout << "\nENTER ADMIN ACCESS ID:";
            cin >> admin_id;
            if (admin_id == 12345) {
                cout << "\n\t\t !! SUCCESSFULLY LOGGED IN AS ADMIN!! \n";
                Student t = students[0].Admin_menu(students); 
                students.push_back(t);
            }
            else {
                cout << "\nINVALID ADMIN ID\n";
            }
            break;
        }
        case 30: {
            int admin_id;
            cout << "\nENTER ADMIN ACCESS ID:";
            cin >> admin_id;
            if (admin_id == 678910) {
                int _ch;
                
                cout << "\n         !! SUCCESSFULLY LOGGED IN AS ADMIN!! \n";
                cout << "\n\n\n             1. DISPLAY ALL STUDENTS DATA";
                cout << "\n\n\n             2. DISPLAY ALL COURSES DATA";
                cout << "\n\n\n             3. DISPLAY ALL FACULTY DATA";
                cout << "\n\n\n             4. DISPLAY ALL DEPARTMENT DATA";
                cout << "\n\n\n             5. DISPLAY ALL CLUB DATA";
                cout << "\n\n\n             6. DISPLAY ALL ASSIGNMENT DATA";
                cout << "\n\n\n             7. DISPLAY ALL ENROLLMENT DATA";
                cout << "\n\n\n             8. DISPLAY ALL FACULTY COURSE ALLOCATION DATA";
                cout << "\n\n\n             9. DISPLAY ALL GRADES DATA";
                cout << "\n\n\n             10. DISPLAY ALL LIBRARY RESOURCES DATA";
                cout << "\n\n\n             11. DISPLAY ALL ATTENDANCE DATA";
                cout << "\n\n\n             12. DISPLAY ALL EVENT DATA";
                cout << "\n\n\n             13. DISPLAY ALL PROJECT DATA";
                cout << "\n\n\n             14. DISPLAY ALL FEEDBACK DATA";
                cout << "\n\n\n             15. ENTER A STUDENT";
                cout << "\n\n\n             16. ENTER A COURSE";
                cout << "\n\n\n             17. ENTER A FACULTY";
                cout << "\n\n\n             18. ENTER A DEPARTMENT";
                cout << "\n\n\n             19. ENTER A CLUB";
                cout << "\n\n\n     ENTER CHOICE: ";
                cin >> _ch;
                switch (_ch) {
                case 1: {
                    cout << "\n\t\t______________DISPLAYING ALL STUDENTS DATA____________\n";
                    for (auto& s : students) {
                        s.display_student_details();
                    }
                    break;
                }
                case 2: {
                    cout << "\n\t\t______________DISPLAYING ALL COURSES DATA____________\n";
                    for (auto& c : courses) {
                        c.display_course_details();
                    }
                    break;
                }
                case 3: {
                    cout << "\n\t\t______________DISPLAYING ALL FACULTY DATA____________\n";
                    for (auto& f : faculty) {
                        f.display_Faculty_details();
                    }
                    break;
                }
                case 4: {
                    cout << "\n\t\t______________DISPLAYING ALL DEPARTMENT DATA____________\n";
                    for (auto& d : department) {
                        d.display_Department_details();
                    }
                    break;
                }
                case 5: {
                    cout << "\n\t\t______________DISPLAYING ALL CLUB DATA____________\n";
                    for (auto& c : club) {
                        c.display_Club_details();
                    }
                    break;
                }
                case 6: {
                    cout << "\n\t\t______________DISPLAYING ALL ASSIGNMENT DATA____________\n";
                    for (auto& a : assignment) {
                        a.display_assignment_info();
                    }
                    break;
                }
                case 7: {
                    cout << "\n\t\t______________DISPLAYING ALL ENROLLMENT DATA____________\n";
                    for (auto& e : enrollment) {
                        e.display_enrollment_info();
                    }
                    break;
                }
                case 8: {
                    cout << "\n\t\t______________DISPLAYING ALL FACULTY COURSE ALLOCATION DATA____________\n";
                    for (auto& fca : faculty_course) {
                        fca.display_Faculty_Course_info();
                    }
                    break;
                }
                case 9: {
                    cout << "\n\t\t______________DISPLAYING ALL GRADES DATA____________\n";
                    for (auto& g : grades) {
                        g.display_Grade_info();
                    }
                    break;
                }
                case 10: {
                    cout << "\n\t\t______________DISPLAYING ALL LIBRARY RESOURCES DATA____________\n";
                    for (auto& lr : libraryResources) {
                        lr.display_library_info();
                    }
                    break;
                }
                case 11: {
                    cout << "\n\t\t______________DISPLAYING ALL ATTENDANCE DATA____________\n";
                    for (auto& a : attendances) {
                        a.attendance_info();
                    }
                    break;
                }
                case 12: {
                    cout << "\n\t\t______________DISPLAYING ALL EVENT DATA____________\n";
                    for (auto& e : events) {
                        e.display_event_info();
                    }
                    break;
                }
                case 13: {
                    cout << "\n\t\t______________DISPLAYING ALL PROJECT DATA____________\n";
                    for (auto& p : projects) {
                        p.display_project_details();
                    }
                    break;
                }
                case 14: {
                    cout << "\n\t\t______________DISPLAYING ALL FEEDBACK DATA____________\n";
                    for (auto& f : feedbacks) {
                        f.display_feedback_info();
                    }
                    break;
                }
                case 15: {
                    cout << "\n\t\t______________ADDING A STUDENT____________\n";
                    int student_id;
                    string name;
                    string email;
                    string phone_number;
                    cout << "\n     ENTER ID: ";
                    cin >> student_id;
                    cout << "\n     ENTER NAME: ";
                    cin >> name;
                    cout << "\n     ENTER EMAIL: ";
                    cin >> email;
                    cout << "\n     ENTER PHONE:";
                    cin >> phone_number;
                    Student temp(student_id, name, email, phone_number);
                    students.push_back(temp);
                    cout << "\n\t\t______________STUDENT ADDED ____________\n";
                    break;
                }
                case 16: {
                    cout << "\n\t\t______________ADDING A COURSE____________\n";
                    int course_id;
                    string name;
                    int credits;
                    string instructor;
                    cout << "\n     ENTER COURSE ID: ";
                    cin >> course_id;
                    cout << "\n     ENTER COURSE NAME: ";
                    cin >> name;
                    cout << "\n     ENTER CREDITS: ";
                    cin >> credits;
                    cout << "\n     ENTER INSTRUCTOR: ";
                    cin >> instructor;
                    Course temp(course_id, name, credits, instructor);
                    courses.push_back(temp);
                    cout << "\n\t\t______________COURSE ADDED ____________\n";
                    break;
                }
                case 17: {
                    cout << "\n\t\t______________ADDING A FACULTY MEMBER____________\n";
                    int faculty_id;
                    string name;
                    string email;
                    string phone_number;
                    cout << "\n     ENTER FACULTY ID: ";
                    cin >> faculty_id;
                    cout << "\n     ENTER NAME: ";
                    cin >> name;
                    cout << "\n     ENTER EMAIL: ";
                    cin >> email;
                    cout << "\n     ENTER PHONE:";
                    cin >> phone_number;
                    Faculty temp(faculty_id, name, email, phone_number);
                    faculty.push_back(temp);
                    cout << "\n\t\t______________FACULTY MEMBER ADDED ____________\n";
                    break;
                }
                case 18: {
                    cout << "\n\t\t______________ADDING A DEPARTMENT____________\n";
                    int department_id;
                    string name;
                    string head_of_department;
                    cout << "\n     ENTER DEPARTMENT ID: ";
                    cin >> department_id;
                    cout << "\n     ENTER DEPARTMENT NAME: ";
                    cin >> name;
                    cout << "\n     ENTER HEAD OF DEPARTMENT: ";
                    cin >> head_of_department;
                    Department temp(department_id, name, head_of_department);
                    department.push_back(temp);
                    cout << "\n\t\t______________DEPARTMENT ADDED ____________\n";
                    break;
                }
                case 19: {
                    cout << "\n\t\t______________ADDING A CLUB____________\n";
                    int club_id;
                    string name;
                    string description;
                    cout << "\n     ENTER CLUB ID: ";
                    cin >> club_id;
                    cout << "\n     ENTER CLUB NAME: ";
                    cin >> name;
                    cout << "\n     ENTER DESCRIPTION: ";
                    cin >> description;
                    Club temp(club_id, name, description);
                    club.push_back(temp);
                    cout << "\n\t\t______________CLUB ADDED ____________\n";
                    break;
                }


                default: {
                    cout << "\nINVALID CHOICE\n";
                    break;
                }
                }
            }
            else {
                cout << "\nINVALID ADMIN ID\n";
            }
            break;
        }

        case 40:
            continueLoop = false;
            break;
        
        default:
            cout << "\nINVALID CHOICE, PLEASE TRY AGAIN\n";
            break;
        }
    }



    for ( auto& s : students) {
         Student:: write_student_data_to_csv(s, "student.txt");
    }

    for (auto& s : courses) {
        Course::write_course_data_to_csv(s, "course.txt");
    }
    for (auto& s : faculty) {
        Faculty::write_faculty_data_to_csv(s, "faculty.txt");
    }
    // add for dept.
    for (auto& s : department) {
        Department::write_department_data_to_csv(s, "department.txt");
    }
    for (auto& c : club) {
        Club::write_club_data_to_csv(c, "clubs.txt");
    }
    for (auto& a : assignment) {
        Assignment::write_assignment_data_to_csv(a, "assignment.txt");
    }
    for (auto& a : enrollment) {
        Enrollment::write_enrollment_data_to_csv(a, "enrollment.txt");
    }
    for (auto& a : faculty_course) {
        FacultyCourseAllocation::write_Faculty_Course_data_to_csv(a, "Faculty_Course.txt");
    }
    for (auto& a : grades) {
         Grade::write_grade_data_to_csv(a, "grade.txt");
    }
    for (auto& a : libraryResources) {
        LibraryResource::write_Library_data_to_csv(a, "library.txt");
    }
    for (auto& a : attendances) {
        Attendance::write_attendance_to_csv(a, "attendance_records.txt");
    }
    for (auto& a : events) {
        Event::write_event_data_to_csv(a, "event.txt");
    }
    for (auto& a : projects) {
        Project::write_project_to_csv(a, "project.txt");
    }
    for (auto& a : feedbacks) {
        Feedback::write_feedback_to_csv(a, "feedback.txt");
    }
    
    return 0;
}

