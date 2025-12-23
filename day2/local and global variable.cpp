#include <iostream>
using namespace std;
    int glo=45;
    void sum(){
        cout<<"\n this is global variable "<<glo;        
    }
int main() {
    int glo=66;
    glo=44;
    cout<<" \n this is local variable "<<glo;
    sum();
    return 0;
}
