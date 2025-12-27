#include <iostream>
using namespace std;
int main () {
    int a;
    cout<<"enter the integer from -10 to 10:\n";
    cin>>a;                               //input of the integer
    if ((a>=-10) && (a<0))                //using if else for different inputs
    {
      cout<<"this is an negative integer \n";
    }
      else if ((a>0) && (a<=10)){
        cout<<"you entered an positive integer\n";
      }
      else if(a==0){
        cout<<"you entered zero a netral number\n";}      
      char ch;
      if(!((a>=-10) && (a<=10))){
        cout<<"the number is out of range so multiples cannot be created\n";
        return 0;  }
       cout<<"do you want multiple of this integer?(y/n)\n"; 
       cin>>ch;
      if(ch=='y' || ch=='Y')
      {
            int i = 1;
        cout<<"the multiples of "<<a<<" is:"<<endl;
          for (i=1;i<=10;i++){
            int c=a*i;
            cout<<a<<"x"<<i<<"="<<c<<endl;
          }
      }
        else{
            cout<<"thank you for using the program\n";
        }   
   return 0;
}
