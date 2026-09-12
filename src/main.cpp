#include"student.h"
#include<vector>
using namespace std;
vector<Student>students;

int main(){
    Student s;
    int choice,id;
    bool running=true;
  while(running){
        cout<<"Student Management System"<<endl;
        cout<<"1: add student"<<endl;
        cout<<"2: display all student"<<endl;
        cout<<"3: search student"<<endl;
        cout<<"4: Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
          s.get();
    students.push_back(s);
    break;

    case 2:
     cout<<"the student details"<<endl;
     for(size_t i=0;i<students.size();i++ ){
       students[i].display();

     }
     break;
     case 3:
     {
     cout<<"enter student id"<<endl;
     cin>>id;
     bool found=false;
     for(size_t i=0;i<students.size();i++){
      if(id==students[i].getid()){
        students[i].display();
        found=true;
        break;

      }
     
     }
      if(!found){
        cout<<"student not found"<<endl;
      }
    }
     break;
     
     case 4:
     exit(0);
     

     default:
     cout<<"enter vallid choice"<<endl;


        }
    }
    
}