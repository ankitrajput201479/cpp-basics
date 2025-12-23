#include <iostream>
using namespace std;
    int glo=45; // assigning global variable outside function
    void sum(){
        cout<<"\n this is global variable "<<glo;        
    }
int main() {
    int glo=66; // assigning local variable inside function
    glo=44;
    cout<<" \n this is local variable "<<glo;
    sum(); // calling function
    return 0;
}
// local and global variable can have same name
