#include<iostream>
using namespace std;
int main(){  // using if else-if ladder
    int age;
    cout<<"welcome to the voting center\n";
    cout<<"enter your age:\n";
    cin>>age;
    if((age>=18) &&(age<=50)){
        cout<<"you can vote buddy";
    }
    else if(age<18){
        cout<<"grow up kid";
    }
    else if((age>50) && (age<=80)){
        cout<<"bring the chair for senior citizen to vote";
    }
    else{
      cout<<"you are above 80 years do you need any help? \n";\
    }
    return 0;
    }
