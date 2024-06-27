#pragma once
#include <string>
using namespace std;
#include"Student.h"
#include"Course.h"

class Feedback {
private:
    int feedback_id;
    string content;
    int rating;
    Student student;
    Course course;

public:
    // Constructors
    Feedback();
    Feedback(int feedbackId, const string& content, int rating, const Student & stu, const Course & cour);

    // Destructor
    ~Feedback();

    // Getter methods
    int get_feedback_id() const;
    string get_content() const;
    int get_rating() const;

    // Setter methods
    void set_feedback_id(int feedbackId);
    void set_content(const string& content);
    void set_rating(int rating);


    static  void write_feedback_to_csv(Feedback& feed, const string& filename);
    void display_feedback_info();
    void check_feedback();

    void  event_menu();
};


