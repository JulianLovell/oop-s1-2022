#include <iostream>
#include <string>

using namespace std;

class Document{
    protected:

     string title;
     string documentType;
     int numPages;

     Document(string t, string d, int n);

    void set_title (string t);
    string get_title();

    void set_documentType(string d);
    string get_documentType();

    void set_numPages(int n);
    int get_numPages();
};