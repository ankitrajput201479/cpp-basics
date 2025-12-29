#include <iostream>
#include<iomanip>
using namespace std;
void swap(int x, int y){
    
    int temp = y; // swapping logic 
     y = x;
       x = temp;
    cout<<"the value of a    "<<x<<endl<<"value of y   "<<y<<endl;
}

int main() {
    int a=4,b=5;
    cout<<"the value of a is "<<a<<endl<<"the value of b is"<<b<<endl;
   swap(a,b);
   cout<<"the value of a after swap is "<<a<<endl<<"the value b after swap is   "<<b<<endl;
   return 0;
}// the value didnt swap because x and y are changing and a and b value is safe proves function call by value
//the copy of actual parameters is given to formal parameters 
