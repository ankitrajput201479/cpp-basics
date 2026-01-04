#include <iostream>
using namespace std;
int main() {
    int a =3;
    int* b= &a; // used to declare pointerto save adress of a variable
    cout<<"the address of a is "<<b<<endl;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the value of a is "<<*b<<endl;
    cout<<"the value of a is "<<a<<endl;
    // (*) yhis is a derefrence operator also known as value at operator
    // (&) address of operator
    //>>>>>>>>>>>>>>>>pointer to pointer<<<<<<<<<<<<<<<<<<<
    int** c =&b;//here stored the adress of pointer b in another pointer c
    cout<<"the value of a is  "<<**c<<endl;
    cout<<"the adress of pointer *b is "<<c<<endl;
    *b=20;
    cout<<"new value of a "<<a<<endl; // can also change the value
   return 0;

}
