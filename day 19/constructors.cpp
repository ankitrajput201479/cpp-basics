#include <iostream>
using namespace std;
class maths {
    private:
    int a;
    int b;
    public:
    void printnum(void){
        cout<<"the answer is  "<<a<<"+"<<b<<"i is "<<endl;
    }
    maths(void){  //constructor declaration this is a default constructor because it takes no parameter
        a=10;
        b=20;
        cout<<"hi";
    }
};
int main() {
    maths c1,c2,c3;
    c1.printnum();
    c2.printnum();
    c3.printnum();
  //without calling the maths function the value of a and b is invoked
   return 0;
}
/*constructor is a member function same name as class and 
 it is automatically invoked(called) after declaring an object*/
