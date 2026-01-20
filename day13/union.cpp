#include <iostream>
using namespace std;
 union student
 {
   int ricesize;
   float price;
 };
int main() {
    union student m1; //only one can be used in union
    m1.ricesize=10;
    cout<<m1.ricesize;
   return 0;
}
