#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int id,age;
    string course;
    public:
    void get();
    void display();
    int getid();
    bool input_valid();
    bool input_char();
    bool input_cour();
    
};
#endif