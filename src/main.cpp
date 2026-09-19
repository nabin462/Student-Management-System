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
        cout<<"4: Delete student"<<endl;
        cout<<"5: update student "<<endl;
        cout<<"6: Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
          if(cin.fail()){
            cout<<"enter the number only not character"<<endl;
            cin.clear();
            cin.ignore(1000,'\n');
            continue;

          }

        
        switch(choice){
            case 1:{
          s.get();
          bool duplicate=false;
          for(size_t i=0;i<students.size();i++){
            if(s.getid()==students[i].getid())
            {
              cout<<"enter other id because it already exist"<<endl;
              duplicate=true;
              break;
            }
            
          }
          if(!duplicate){
          
    students.push_back(s);
          }
        }
          
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

     

     case 4:{
     int uid;
     cout<<"enter the student id"<<endl;
     cin>>uid;
     bool found=false;
     for(size_t i=0;i<students.size();i++){
      if(uid==students[i].getid()){
        students.erase(students.begin()+i);
        cout<<"student is delete sucessfully"<<endl;
        found =true;
      break;

      }
      
     }

     if(!found){
      cout<<"student is not found"<<endl;
     }
    }
     break;

     case 5:
     {
     int sid;
    
     cout<<"enter the student id"<<endl;
     cin>>sid;
      bool found=false;
     for(size_t i=0;i<students.size();i++){
     if(sid==students[i].getid()){
      cout<<"student is found"<<endl;
     int newid= students[i].update();
     bool duplicate=false;
      found=true;
      break;

     }

    }
    if(!found){
      cout<<"student is not fond"<<endl;
    }
  }
  
     break;

     
     case 6:
     exit(0);
     

     default:
     cout<<"enter vallid choice"<<endl;


        }
    }
    
}