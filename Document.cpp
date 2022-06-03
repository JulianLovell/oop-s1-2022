#include <iostream>
#include <string>

#include "document.h"

using namespace std;

Document::Document(){

    title = "null"
    documentType = "null"
    numPages = "0"

}

Document::Document(string t, string d, int n){

  t = title;
  d = documentType;
  n = numPages;

};