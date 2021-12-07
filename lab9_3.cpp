/*"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"*/
#include <iostream>
using namespace std;

int main()
{
    int age,height,property;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=20){
        cout<<"Enter your height: ";
        cin>>height;
        if(height<160){
          cout<<"Your status = UNFRIEND"; 
        }else if(height<175&&height>=160){
            cout<<"Your status = FRIEND";
        }else if(height>=175){
            cout<<"Enter your property: ";
            cin>>property;
            if(property<=69000000){
              cout<<"Your status = ONE-NIGHT-STAND"; 
            }else{
                cout<<"Your status = MARRIED";
            }
        }
    }else if(age<30&&age>20){
        cout<<"Enter your property: ";
            cin>>property;
            if(property>10000000){
              cout<<"Your status = BEST FRIEND"; 
            }else{
                cout<<"Your status = UNFRIEND";
            }
    }else{
        cout<<"Your status = UNFRIEND";
    }
 
  return 0;
}