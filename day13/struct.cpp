#include <iostream>
using namespace std;
 typedef struct student      //type def keyword 
{
   int sid;
   
   float fee;
   char grades;
}st;  

// struct keyword is used to store different data type 
int main() {
     st roll1; //no need to write ' struct student' only st will do the work
    roll1.sid =101;
    // in union all values can be used
    roll1.fee = 1000.23;
    roll1.grades='F';
    
    cout<<"student id of student = "<<roll1.sid<<endl;
    cout<<"fee due of student = "<<roll1.fee<<endl;
    cout<<"grades of student = "<<roll1.grades<<endl;
   return 0;
}
