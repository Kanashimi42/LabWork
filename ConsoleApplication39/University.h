#pragma once
#include <iostream>

using namespace std;

class University {
    string universityName;
    string universityAddress;
    string universityFaculty;
public:
    University(string, string, string);

    void InputUniversity();
    void PrintUniversity();

    string GetUniversityName() const;
    string GetUniversityAddress() const;
    string GetUniversityFaculty() const;

    void SetUniversityName(string);
    void SetUniversityAddress(string);
    void SetUniversityFaculty(string);
};
