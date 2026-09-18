#include"student.h"
#include<iostream>
#include <cctype>
using namespace std;
void Student::get(){

    while (true){
    
    cout<<"enter your name"<<endl;
    cin>>name;
   if(input_char()){
    break;

   }

    }
    while(true){
         above:
    cout<<"enter the age"<<endl;
    cin>>age;
   if( input_valid()){
    if(age<0){
        cout<<"enter age between 1-100"<<endl;
        goto above;
    }
    break;
   }
    }


    while(true){
        up:
    cout<<"enter the id"<<endl;
    cin>>id;
    if( input_valid()){
        if(id<0){
            cout<<"enter the id greater than 0"<<endl;
            
            goto up;
        }
    break;
   }
    }


    while ((true))
    {
           cout<<"enter the course"<<endl;
    cin>>course;
    if(input_cour()){
         break;
    }; 

}


    }
    
        
 
void Student::display(){
    cout<<"Name:"<<name<<"\t"<<"Age:"<<age<<"\t"<<"Id:"<<id<<"\t"<<"Course:"<<course<<endl;
}
int Student::getid(){
    return id;
}

bool Student::input_valid(){
    if(cin.fail()){
        cout<<"enter the number only not character"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        return false;
    
    }
    
    return true;
}

bool Student::input_char(){

        
    for(size_t i=0;i<name.length();i++){
    if(!isalpha(name[i])){
        cout<<"enter the only character not number"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        return false;
    }
   
        }
         return true;
         
}


bool Student::input_cour(){
    for(size_t i=0;i<course.length();i++){
        if(!isalpha(course[i])){
            cout<<"enter the character only not number"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            return false;
        }
          
       }
    return true;
  
}
    