#include<iostream>
using namespace std;
int main(){
    
for (int i =1 ; i<=10; i++){ // break keyword example
    if(i==4){                //here 4 will break the loop
        break;
    }
    cout<<i<<endl;
    
}// continue keyword example
cout<<"reverse order:\n";
for(int i=10; i>=1; i--){    //here 4 willbe skipped in output
    if(i==4){
        continue;
    }
    
    cout<<i<<endl;
}
    return 0;
}
