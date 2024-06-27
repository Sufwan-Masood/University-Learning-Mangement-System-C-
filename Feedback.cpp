#include "Feedback.h"

// Default constructor
Feedback::Feedback() : feedback_id(0), content(""), rating(0) {}



// Parameterized constructor
Feedback::Feedback(int feedbackId, const std::string& cont, int rate, const Student& stu, const Course& cour)
    : feedback_id(feedbackId), content(cont), rating(rate), student(stu), course(cour) {}

// Destructor
Feedback::~Feedback() {}

// Getter methods
int Feedback::get_feedback_id() const {
    return feedback_id;
}

std::string Feedback::get_content() const {
    return content;
}

int Feedback::get_rating() const {
    return rating;
}

// Setter methods
void Feedback::set_feedback_id(int feedbackId) {
    feedback_id = feedbackId;
}

void Feedback::set_content(const std::string& cont) {
    content = cont;
}

void Feedback::set_rating(int rate) {
    rating = rate;
}

void Feedback::write_feedback_to_csv(Feedback& feed, const string& filename)
{
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current feedback
    file << feed.get_feedback_id() << ",";
    file << feed.get_content() << ",";
    file << feed.get_rating() << ",";
    file << feed.student.get_student_id() << ",";
    file << feed.student.get_name() << ",";
    file << feed.course.get_course_id() << ",";
    file << feed.course.get_name() << endl;

    file.close();
}

void Feedback::display_feedback_info()
{
    cout << "\n--------------------------------------------------------\n";
    cout << "\nFEEDBACK_ID: " << feedback_id << endl;
    cout << "\nCONTENT: " << content << endl;
    cout << "\nRATING: " << rating << endl;
    cout << "\nSTUDENT_ID: " << student.get_student_id() << endl;
    cout << "\nSTUDENT_NAME: " << student.get_name() << endl;
    cout << "\nCOURSE_ID: " << course.get_course_id() << endl;
    cout << "\nCOURSE_NAME: " << course.get_name() << endl;
    cout << "\n--------------------------------------------------------\n";
}

void Feedback::check_feedback()
{
    // Create students
    Student s1{ 1,"SUFWAN","sufwanmasood15gmail","0345678" };
    Student s2{ 2,"Ali_Khan","alikhan@gmail.com","03001234567" };
    Student s3{ 3,"Ayesha_Ahmed","ayeshaahmed@yahoo.com","03123456789" };
    Student s4{ 4,"Hamna_Nasir","hamna_nasir@gmail","03312782" };

    Student s5{ 5,"Abdul_Majeed","abdulmajeed@hotmail.com","03234567890" };
    Student s6{ 6,"Fatima_Khan","fatimakhan@gmail.com","03415678902" };
    Student s7{ 7,"Imran_Ahmed","imranahmed@yahoo.com","03123456781" };
    Student s8{ 8,"Sara_Ali","saraali@hotmail.com","03017894567" };
    Student s9{ 9,"Usman_Khan","usmankhan@gmail.com","03213456789" };
    Student s10{ 10,"Hina_Ahmed","hinaahmed@yahoo.com","03127894567" };
    Student s11{ 11,"Bilal_Khan","bilalkhan@gmail.com","03315678902" };
    Student s12{ 12,"Sadia_Ahmed","sadiaahmed@hotmail.com","03013456781" };
    Student s13{ 13,"Ahmed_Ali","ahmedali@gmail.com","03223456789" };
    Student s14{ 14,"Maryam_Khan","maryamkhan@yahoo.com","03127894567" };

    // Create courses
    Course c1(123, "CALCULUS", 3, "MARIAM");
    Course c2(124, "Physics", 4, "Dr_Rafique_Ahmed");
    Course c3(125, "Computer_Science", 3, "Prof_Farhan_Khan");
    Course c4(126, "Chemistry", 3, "Dr._Aisha_Khan");
    Course c5(127, "Biology", 3, "Prof._Ali_Raza");
    Course c6(128, "English_Literature", 2, "Ms._Sana_Malik");

    // Create feedbacks
    Feedback f1(1, "Great_course!", 5, s1, c1);
    Feedback f2(2, "Interesting_topics!", 4, s2, c2);
    Feedback f3(3, "Enjoyed_lectures!", 4, s3, c3);
    Feedback f4(4, "Needs_improvement.", 3, s4, c4);
    Feedback f5(5, "Very_informative!", 5, s5, c5);
    Feedback f6(6, "Engaging_discussions.", 4, s6, c6);
    Feedback f7(7, "Challenging_assignments.", 4, s7, c1);
    Feedback f8(8, "Helpful_instructor.", 5, s8, c2);
    Feedback f9(9, "Clear_explanations.", 5, s9, c3);
    Feedback f10(10, "Interesting_experiments.", 4, s10, c4);
    Feedback f11(11, "Good_material.", 4, s11, c5);
    Feedback f12(12, "Interactive_sessions.", 5, s12, c6);
    Feedback f13(13, "Inspiring_lectures.", 5, s13, c1);
    Feedback f14(14, "Interesting_readings.", 4, s14, c2);

    // Vector of feedbacks
    vector<Feedback> feedbacks = { f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f14 };

    // Write feedbacks to CSV file
    for (auto& feedback : feedbacks) {
        Feedback::write_feedback_to_csv(feedback, "feedback_records.csv");
    }

    // Display feedback details
    for (auto& feedback : feedbacks) {
        feedback.display_feedback_info();
    }
}

void Feedback::event_menu()
{
    int choice;
    cout << "\n         WELCOME TO FEEDBACK SECTION\n";
    cout << "\n\n\n1.   DISPLAY FEEDBACK INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        display_feedback_info();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}



