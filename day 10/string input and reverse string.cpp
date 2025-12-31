#include <iostream>
using namespace std;

int main() {
    char str[10]; // for input string we need to enter the size
    cout<<"enter the string :"<<endl;
    cin>>str;
    //length first
    int len=0;
    int i;
    for( i=0;str[i]!='\0';i++)
    {len++;}
    // for reverse logic
    for(i=0;i<len/2;i++){
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    cout<<str<<endl;
   return 0;
}
