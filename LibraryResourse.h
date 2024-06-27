#pragma once
#include <string>
using namespace std;
class LibraryResource {
private:
    int resource_id;
    string title;
    string author;
    bool availability;
      
public:
    // Constructors
    LibraryResource();
    LibraryResource(int resourceId, const string& title, const string& author, bool avail);

    // Destructor
    ~LibraryResource();

    // Getter methods
    int get_resource_id() const;
    string get_title() const;
    string get_author() const;
    bool is_available() const;

    // Setter methods
    void set_resource_id(int resourceId);
    void set_title(const string& title);
    void set_author(const string& author);
    void set_availability(bool avail);

    static  void write_Library_data_to_csv(LibraryResource& lib, const string& filename);
    void display_library_info();
    void checkLibrary();

    void  Library_menu();
};


