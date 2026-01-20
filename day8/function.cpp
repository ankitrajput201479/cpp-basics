#include <iostream>
using namespace std;
void g(){ //function created
        cout<<"your output is generated successfully"<<endl;
    }
int sum(int, int); //function prototype declaration here function declaration is at end of the whole code

int main() {
    int num1,num2;
    cout<<"enter first number:"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    cout<<"the sum is:"<<sum(num1,num2)<<endl; //here sum function is called
     g();
   return 0; 
}

int sum(int a, int b){ 
    int c=a+b;     // function created after calling in main function         
    return c;                     
}
