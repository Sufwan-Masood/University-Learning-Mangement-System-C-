#include "Event.h"

// Default constructor
Event::Event() : event_id(0), title(""), description(""), date(), venue("") {}

// Parameterized constructor
Event::Event(int eventId, const string& t, const string& desc, const Date& d, const string& v)
    : event_id(eventId), title(t), description(desc), date(d), venue(v) {}

// Destructor
Event::~Event() {}

// Getter methods
int Event::get_event_id() const {
    return event_id;
}

string Event::get_title() const {
    return title;
}

string Event::get_description() const {
    return description;
}

Date Event::get_date() const {
    return date;
}

string Event::get_venue() const {
    return venue;
}

// Setter methods
void Event::set_event_id(int eventId) {
    event_id = eventId;
}

void Event::set_title(const string& t) {
    title = t;
}

void Event::set_description(const string& desc) {
    description = desc;
}

void Event::set_date(const Date& d) {
    date = d;
}

void Event::set_venue(const string& v) {
    venue = v;
}

void Event::write_event_data_to_csv(Event& eve, const string& filename)
{
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current event
    file << eve.get_event_id() << ",";
    file << eve.get_title() << ",";
    file << eve.get_description() << ",";
    file << eve.get_date().to_string() << ",";
    file << eve.get_venue() << endl;

    file.close();
}

void Event::display_event_info()
{
    cout << "\n--------------------------------------------------------\n";
    cout << "\nEVENT_ID: " << event_id << endl;
    cout << "\nTITLE: " << title << endl;
    cout << "\nDESCRIPTION: " << description << endl;
    cout << "\nDATE: " << date.to_string() << endl;
    cout << "\nVENUE: " << venue << endl;
    cout << "\n--------------------------------------------------------\n";
}

void Event::check_event()
{
    // Create event objects
    Event event1(101, "Chess_Tournament", "Annual_chess", Date(2024, 4, 30), "Chess_Hall");
    Event event2(102, "Drama_Workshop", "Interactive_drama", Date(2024, 5, 15), "Auditorium");
    Event event3(103, "Music_Concert", "Annual_music", Date(2024, 6, 1), "Concert_Hall");
    Event event4(104, "Debate_Competition", "Inter-university_debate", Date(2024, 6, 20), "Debate_Hall");
    Event event5(105, "Photography_Exhibition", "Student_photography", Date(2024, 7, 5), "Gallery");

    // Create vector to hold events
    vector<Event> events = { event1, event2, event3, event4, event5 };

    // Display event details
    for (auto& event : events) {
        event.display_event_info();
    }


    for (auto& event : events) {
        Event::write_event_data_to_csv(event, "event.csv");
    }
    
}

void Event::event_menu()
{
    int choice;
    cout << "\n         WELCOME TO EVENT SECTION\n";
    cout << "\n\n\n1.   DISPLAY EVENT INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        
        display_event_info();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}





