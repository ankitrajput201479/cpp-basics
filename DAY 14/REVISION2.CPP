#include <iostream>
using namespace std;
 enum day{ no,mon,tue,wed,thu,fri};
int main() {
    int dayno;
    cout<<"enter the  day number (0 to 5) :";
    cin>>dayno;
    day d = (day)dayno;

    switch(d){
        case mon:
        cout<<"fish,pepper creme pasta vailaible today";
        break;
        case tue:
        cout<<"soup,pasta,cousene,availaible today";
        break;
        case wed:
        cout<<"roti,sabzi ,naan availaible today ";
        break;
        case thu:
        cout<<"chinese food  availaible today ";
        break;
        case fri:
        cout<<" only starter availaible today ";
        break;
        default:
        cout<<"the store is closed today";
        break;
    
        
    }

  return 0;
}
