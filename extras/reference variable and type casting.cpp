#include<iostream>
using namespace std;
int main(){
/************REFERENCE VARIABLE************* * yha humne ek variable ka dusre
variable ko reference banaya hai jiska matlab hai ki dono same memory location ko point kar rahe hain*/
float o=67;
float & n=o;
cout<<o<<endl;
cout<<n<<endl;
//*********************type casting***************** */
int x = 45;

cout<< "the value of x is:"<<(float)x<<endl;
float y=34.67;
cout<<"the value of y is :"<<(int)y<<endl;
// yha 45 ko int se float me convert kar diya hai or 34.67 ko float se int me convert kar diya hai
int z = int(y);
cout<<"the value of z is :"<<(int(x)+float(y))<<endl<<z<<endl;
    return 0;
}
