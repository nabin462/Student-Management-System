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

    cout << "enter the student id" << endl;
    cin >> sid;

    bool found = false;
    bool updating=true;

    for(size_t i = 0; i < students.size(); i++){

        if(sid == students[i].getid()){
          

            cout << "student is found" << endl;
               found = true;
            int option;
            while(updating){
            cout<<"what do you want to update?"<<endl;
            cout<<"1: name"<<endl;
            cout<<"2: ID"<<endl;
            cout<<"3: Age"<<endl;
            cout<<"4: Course"<<endl;
            cout<<"5:Back"<<endl;
            cout<<"enter the option"<<endl;
            cin>>option;
            switch (option)
            
            {
            case 1:{
              string newname;
              above:
              cout<<"enter the  update name"<<endl;
              cin>>newname;
              bool valid=true;
               for(size_t i=0;i<newname.length();i++)
    {
        if(!isalpha(newname[i])){
            
            valid=false;
            break;

        }
        
    }
    if(!valid){
      cout<<"enter the character not number"<<endl;
      goto above;
    }
    
      students[i].updatename(newname);
    
          }
              break;


              case 2:{
              int newid;
              up:
              cout<<"enter the update id"<<endl;
              cin>>newid;
              if(cin.fail()){
                cout<<"enter the number only not character"<<endl;
                cin.clear();
                cin.ignore(100,'\n');
                goto up;
              }
              bool duplicat=false;
               for(size_t j=0;j<students.size();j++){
                if(newid==students[j].getid()){
                  duplicat=true;
                  break;

                }
               }
               if(duplicat){
                cout<<"enter the other id because id already exit"<<endl;
                goto up;
               }
              
              
              students[i].setid(newid);
              }
              break;

              case 3:{
              int newage;
              top:
              cout<<"enter the upadate age"<<endl;
              cin>>newage;
              if(cin.fail()){
                cout<<"enter the number only not character"<<endl;
                cin.clear();
                cin.ignore(100,'\n');
                goto top;
              }
             
              students[i].updateage(newage);
              }
              break;

              case 4:{
                first:
              string newcourse;
              cout<<"enter the update course"<<endl;
              cin>>newcourse;
              for(size_t i=0;i<students.size();i++){
                if(!isalpha(newcourse[i])){
                  cout<<"enter the character only not character"<<endl;
                  goto first;
                }
              }
              students[i].updatecourse(newcourse);
              }
              break;
              
              case 5:
              updating=false;
              break;
            
            default:
            cout<<"enter vallid option"<<endl;
              break;
            }
            
          }
          break;
            
        }
       

       
            
        
    }

    if(!found){
        cout << "student is not fond" << endl;
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