#include <iostream>
#include <string>

#include "Document.h"

using namespace std;

Document::Document(){

    string title = "null"
    string documentType = "null"
    int numPages = "0"

}

Document::Document(string t, string d, int n){

  t = title;
  d = documentType;
  n = numPages;

};

void::Document set_title(string t){

  title = t;

};

string::document get_title(){

  return title;

};

void::Document set_documentType(string d){

  documentType = d;

};

string::Document get_documentType(){

  return documentType;

};

void::Document set_numPages(int n){

  numPages = n;

};

int::Document get_numPages(){

  return numPages;

};