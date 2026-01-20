#include <iostream>
using namespace std;
//dynamic memory allocation stores memory in heap
int main() {
    int* add = NULL; 
     add = new int;
     *add=45;


    cout<<"the adress is "<<add<<endl;
    cout<<"the value is "<<*add<<endl;
     delete add; //should use delete operator to prevent memory leak
   return 0;
}
