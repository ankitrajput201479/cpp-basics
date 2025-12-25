 #include<iostream>
using namespace std;
int main(){// using switch case
    int age;
    cout<<"welcome to the voting center\n";
    cout<<"enter your age:\n";
    cin>>age;
 switch (age){
            case 18:
            cout<<"you can vote from next year";
            break;
            case 50:
            cout<<"you can vote but with caution";
            break;
            case 80:
            cout<<"you are too old to vote ";
            break;
            default:
            cout<<"no special rule for this age";
            break;
  }
  return 0;
}
