#include<iostream>
using namespace std;
int main(){

// ********FLOAT,DOUBLE AND LONG DOUBLE LITERALS******** 
float d=45.5f;
long double t=45.5l;
cout<<"value of d is:"<<d<<endl<<"the value of long double t is :"<<t<<endl;
cout<<"size of 45.5l is :"<<sizeof(45.5l)<<endl; //size of keyword used for size of the variable
cout<<"size of 45.5f is :"<<sizeof(45.5f)<<endl;
cout<<"size of 45.5L is :"<<sizeof(45.5L)<<endl;
cout<<"size of 45.5F is :"<<sizeof(45.5F)<<endl;
cout<<"size of 45.5 is :"<<sizeof(45.5)<<endl;
return 0;
}
