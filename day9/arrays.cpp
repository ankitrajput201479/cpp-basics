#include <iostream>
using namespace std;

int main() {
    // array declaration
     // in curly bracket there are array elements 
    // optional to declare array size
    int match[5] = {20,34,60,10,5};

    
        cout<<"the match score of 1 is :"<<match[0]<<endl;
    cout<<"the match score of 2 is :"<<match[1]<<endl;
    match[3] = 15; // we can also change the value of elements in an array 
    cout<<"the match score of 3 is :"<<match[2]<<endl;
    cout<<"the match score of 4 is :"<<match[3]<<endl;
   
   return 0;
}
