#include<iostream>
using namespace std;
int main(){//using arithmatic operators
    int a =24;
    int b = 67;
   cout<<"the sum a and b:"<<a+b<<endl;           //endl can also be used instead of \n
    cout<<"the difference of a and b:"<<a-b<<endl;// it will give the difference
    cout<<"the product of a and b:"<<a*b<<endl;   // it will give the multiplication
    cout<<"the division of a and b:"<<a/b<<endl;  // it will give the division
   cout<<"the modulus operator:"<<a%b<<endl;      // it will give the remainder
    cout<<"the increment operator:"<<++a<<endl;   //it will increase the value by 1
    cout<<"the decrement operator:"<<--b<<endl;   //it will decrease the value by 1
              // so +,-,*,/,%,++,-- are  arithmatic operators
              //arithamatic opertors
      int c=3;
      int f=8;//assignment operators are used to assign the values 
              // now the comparison operators
      cout<<"folowing are the comparison operators"<<endl;
      cout<<"the value of c==f is "<<(c==f)<<endl;   // it will check both values are equal or not
      cout<<"the value of c!=f is "<<(c!=f)<<endl;   // it will check both values are not equal
      cout<<"the value of c>=f is "<<(c>=f)<<endl;   // it will check c is greater than or equal to f
      cout<<"the value of c<f is "<<(c<f)<<endl;     // it will check c is greater than f
      //logical operators are just like comparison operators 
      cout<<"logical operator"<<endl;
      cout<<"the value of (c<f) && (c!=f) is "<<((c<f) && (c!=f))<<endl;// and operator will check both conditions are true
      cout<<"the value of (c<f) || (c==f) is "<<((c<f) || (c==f))<<endl;// or operator will check any one condition is true
      cout<<"the value of !(c==f) is "<<!(c==f)<<endl;                  // not operator will reverse the condition
    return 0;
}
