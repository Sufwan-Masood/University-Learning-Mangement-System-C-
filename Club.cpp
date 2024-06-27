#include "Club.h"
#include "fstream"

// Default constructor
Club::Club() : club_id(0), name(""), description("") {}

// Parameterized constructor
Club::Club(int id, const string& n, const string& desc)
    : club_id(id), name(n), description(desc) {}

// Destructor
Club::~Club() {}

// Getter methods
int Club::get_club_id() const {
    return club_id;
}

string Club::get_name() const {
    return name;
}

string Club::get_description() const {
    return description;
}

// Setter methods
void Club::set_club_id(int id) {
    club_id = id;
}

void Club::set_name(const string& n) {
    name = n;
}

void Club::set_description(const string& desc) {
    description = desc;
}

void Club::organize_event(const Event& eve)
{
    events_organized.push_back(eve);
}

void Club::write_club_data_to_csv(Club& club, const string& filename)
{
    ofstream file(filename, ios::app); // Open the file in append mode to avoid overwriting existing content
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current club
    file << club.get_club_id() << ",";
    file << club.get_name() << ",";
    file << club.get_description() << ",";

    // Write organized events
    for (const auto& event : club.events_organized) {
        file << event.get_event_id() << ":" << event.get_title()<< ",";
    }
    file << endl;

    file.close();
}

void Club::display_Club_details()
{
    cout << "\n\n********************************************************************\n";
    cout << "           Club ID: " << club_id << endl;
    cout << "           Name: " << name << endl;
    cout << "           Description: " << description << endl;
    cout << "           Events Organized:" << endl;
    for (const auto& event : events_organized) {
        cout << "  - " << event.get_title() << " (ID: " << event.get_event_id() << ")" << endl;
    }
    cout << "\n********************************************************************\n\n";
}

void Club::checkCLUB()
{
    // Initialize clubs
    
    Club Cl1(661, "MLSA", "MICROSOFT");
    Club Cl2(662, "PAK_NS", "NISHAT");
    Club Cl3(663, "TEDx", "UET_KSK");
    Club Cl4(664, "Debating_Club", "UET_Lahore");
    Club Cl5(665, "Programming_Club", "FAST");
    Club Cl6(666, "Photography_Club", "NUST");

    // Initialize events organized by clubs
    Event event1(101, "Chess_Tournament", "Annual_chess", Date(2024, 4, 30), "Chess_Hall");
    Event event2(102, "Drama_Workshop", "Interactive_drama", Date(2024, 5, 15), "Auditorium");
    Event event3(103, "Music_Concert", "Annual_music", Date(2024, 6, 1), "Concert_Hall");
    Event event4(104, "Debate_Competition", "Inter-university_debate", Date(2024, 6, 20), "Debate_Hall");
    Event event5(105, "Photography_Exhibition", "Student_photography", Date(2024, 7, 5), "Gallery");

    // Organize events for clubs
    Cl1.organize_event(event1);
    Cl2.organize_event(event2);
    Cl3.organize_event(event3);
    Cl4.organize_event(event4);
    Cl5.organize_event(event5);
    Cl6.organize_event(event3);


    // Vector of clubs
    vector<Club> clubs = { Cl1,Cl2,Cl3,Cl4,Cl5,Cl6 };

    // Write club data to CSV file
    for (auto& club : clubs) {
        Club::write_club_data_to_csv(club, "clubs.csv");
    }

    // Display club details
    for (auto& club : clubs) {
        club.display_Club_details();
    }
}

void Club::Club_menu()
{
    int choice;
    cout << "\n         WELCOME TO CLUB'S SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << name << " , ID:" << club_id << endl;
    cout << "\n\n\n1.   ADD EVENT\n";
    cout << "\n2.   DISPLAY CLUB INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int event_id;
        string event_title, event_description, event_venue;
        Date event_date;

        cout << "\nEnter event ID: ";
        cin >> event_id;
        cout << "Enter event title: ";
        cin >> event_title;
        cout << "Enter event description: ";
        cin >> event_description;
        cout << "Enter event date (YYYY MM DD): ";
        int year;
        int month;
        int day;
        cin >> year >> month >> day;
        event_date.set_day(day);
        event_date.set_year(year);
        event_date.set_month(month);

        cout << "Enter event venue: ";
        cin >> event_venue;

        Event new_event(event_id, event_title, event_description, event_date, event_venue);
        organize_event(new_event);
        cout << "\nEvent added successfully!" << endl;
    }
    else if (choice == 2) {
        // Display club information
        display_Club_details();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}




