#include <iostream>
using namespace std;

int main() {
    char* grades = NULL;
    int size;
    cout<<"enter the no. of grades :";
    cin>>size;
    grades = new char[size];

    for(int i=0;i<size;i++){
        cout<<"enter the grade #"<<i+1<<":";
        cin>>grades[i];
    } 
    cout<<"the total grades are :";
    for(int i=0;i<size;i++){
      cout <<grades[i]<<" ";
    }
    delete[] grades;
   

   return 0;
}
