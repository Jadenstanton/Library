#pragma once
#include <iostream>
using std::string;

class Book{
public:
    int Id;
    string Title;
    string Author;
    bool CheckedOut; 

    Book(int id, string title, string author);

};