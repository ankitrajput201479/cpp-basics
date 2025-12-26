#include<iostream>
using namespace std;
int main(){ //6 multiples using do while loop
    int i=6;
    do{
        cout<<i<<endl;
        i=i+6;
       }
        while(i<=60);
    cout<<"reverse order:\n";
    i=60;
    do{
        cout<<i<<endl;
        i=i-6;
    }
    while(i>=6);
return 0;
}
