#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int match[5] = {20,34,60,10,5};

    char player[][10] = {"arjun","mohit","manjeet","pushakr","prashant"};
     cout<<"match scores"<<endl;
    for (int i=0;i<5;i++)
    {
        
        cout<<player[i]<<" = "<< setw(i)<<match[i]<<endl;
    }


   return 0;
}
