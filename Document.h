#include <iostream>
#include <string>

using namespace std;

class Document{
    public:

     string title;
     string documentType;
     int numPages;

    void set_title (string _title);
    string get_title():

    void set_documentType(string _documentType);
    string get_documentType();

    void set_numPages(int _numPages);
    int get_numPages();
};