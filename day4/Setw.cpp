#include<iostream>
#include<iomanip>// header file required for setw function//new header file
using namespace std;
int main(){
int a=5,b=4567;
cout<<"the value of a is"<<setw(6)<<a<<endl;// setw function is used to set width of the output
cout<<"the value of b is "<<setw(6)<<b<<endl;
cout<<"the value a wihtout setw is"<<a<<endl;
cout<<"the value b wihtout setw is"<<b<<endl;
}
// so the output with setw(6) will be right aligned with a width of 6 spaces
// and without setw function the output will be as it is without any formatting
