#include<iostream>
using namespace std;
int main(){
    const int a = 45; // constant variable
    cout<<"the value of a was "<<a<<endl;
     a = 34; // error: assignment of read-only variable 'a'
    cout<<"the value of a is "<<a<<endl;
    return 0;
}
