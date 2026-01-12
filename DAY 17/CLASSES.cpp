#include <iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int a2,int a3);//function declaration 
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};
void employee ::setdata( int a1,int a2, int a3){
    a=a1;
    b=a2;
    c=a3;
}
int main() {
    employee ankit;
    ankit.d=12;
    ankit.e=34;
    ankit.setdata(23,45,66); //only fucntions present in class can acess the private variables
    ankit.getdata();

   return 0;
}
