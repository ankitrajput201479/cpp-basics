#include <iostream>
using namespace std;
//ways to implement char string 
int main() {
    char name[]={'i','n','d','i','a','\0','b'}; // after reading \0 string is not read by compiler
    cout<<name<<endl;
   
   char str[]={"india"};// compiler automatically takes \0 at the end of string 
   cout<<str<<endl;
   return 0;
}

// \0 at last of the string in the array
