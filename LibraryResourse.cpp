#include"LibraryResourse.h"
#include <iostream>
#include "vector"
#include <fstream>
using namespace std;

// Default constructor
LibraryResource::LibraryResource() : resource_id(0), title(""), author(""), availability(false) {}

// Parameterized constructor
LibraryResource::LibraryResource(int resourceId, const string& t, const string& a, bool avail)
    : resource_id(resourceId), title(t), author(a), availability(avail) {}

// Destructor
LibraryResource::~LibraryResource() {}

// Getter methods
int LibraryResource::get_resource_id() const {
    return resource_id;
}

string LibraryResource::get_title() const {
    return title;
}

string LibraryResource::get_author() const {
    return author;
}

bool LibraryResource::is_available() const {
    return availability;
}

// Setter methods
void LibraryResource::set_resource_id(int resourceId) {
    resource_id = resourceId;
}

void LibraryResource::set_title(const string& t) {
    title = t;
}

void LibraryResource::set_author(const string& a) {
    author = a;
}

void LibraryResource::set_availability(bool avail) {
    availability = avail;
}

void LibraryResource::write_Library_data_to_csv(LibraryResource& lib, const string& filename)
{
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing: " << filename << endl;
        return;
    }

    // Write data for the current library resource
    file << lib.resource_id << ",";
    file << lib.title << ",";
    file << lib.author << ",";
    file << (lib.availability ? "Available" : "Not Available") << endl;

    file.close();
}

void LibraryResource::display_library_info()
{
    cout << "\n--------------------------------------------------------\n";
    cout << "\nRESOURCE_ID: " << resource_id << endl;
    cout << "\nTITLE: " << title << endl;
    cout << "\nAUTHOR: " << author << endl;
    cout << "\nAVAILABILITY: " << (availability ? "Available" : "Not Available") << endl;
    cout << "\n--------------------------------------------------------\n";
}

void LibraryResource::checkLibrary()
{
    // Create library resources
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

    // Vector to hold library resources
    vector<LibraryResource> library_resources;

    // Add library resources to the vector
    library_resources.push_back(book1);
    library_resources.push_back(book2);
    library_resources.push_back(book3);
    library_resources.push_back(book4);
    library_resources.push_back(book5);
    library_resources.push_back(book6);
    library_resources.push_back(book7);
    library_resources.push_back(book8);
    library_resources.push_back(book9);
    library_resources.push_back(book10);

    // Display library resources information
    for ( auto& resource : library_resources) {
        resource.display_library_info();
    }

    
    for (auto& resource : library_resources) {
       LibraryResource::write_Library_data_to_csv(resource, "library.csv");
    }
}

void LibraryResource::Library_menu()
{
    int choice;
    cout << "\n         WELCOME TO LIBRARY RESOURCE SECTION\n";
    cout << "\n         LOGGED ACCOUNT: " << resource_id << endl;
    cout << "\n\n\n1.   DISPLAY LIBRARY RESOURCE INFORMATION\n";
    cout << "\nPlease enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Display library resource information
        display_library_info();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}



