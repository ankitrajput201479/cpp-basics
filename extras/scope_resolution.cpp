#include <iostream>
using namespace std;
int c= 76; //global variable

int main(){
    // ***********SCOPE resolution operator************
    int a, b, c;
    cout<<"enter the value of a:\n";
    cin>>a;
    cout<<"enter the value of b:\n";
    cin>>b;
    c = a + b;
    cout<<"the value of c is :"<<c<<endl;
    cout<<"the value of c is:"<<::c<<endl; //this will print the global variable value 
    //'::' is scope resolution operator used to access global variables when local and global variables have same name
