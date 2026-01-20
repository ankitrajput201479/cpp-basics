#include <iostream>
using namespace std;

int main() {//pointer and array is 
 int arr[]={25,26,27,28};
 int* p=arr;
 cout<<"the value at arr[0] is  "<<*p<<endl;
 cout<<"the value at *p+1 is  "<<*(p+1)<<endl;
 cout<<"the value at *p+2 is  "<<*(p+2)<<endl;
 cout<<"the value at *p+3 is  "<<*(p+3)<<endl;
 //pointer arithmatic
 cout<<"using increment operator on pointer"<<*p++<<endl;
 cout<<*(++p)<<endl;
 
   return 0;
}
