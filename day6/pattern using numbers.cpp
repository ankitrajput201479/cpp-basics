#include <iostream>
using namespace std;
 
int main() {
    int i,j; //for counting pattern counts from 1 from every row
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<"   "<<j; 
        }
        cout<<endl;
    }
    int k,l,m; //reverse pattern counting of 1 to 10
    m=1;
    for (k=1;k<=4;k++){
        for(l=4;l>=k;l--){
            cout<<"   "<<m;
            m++;}
            cout<<endl;
        }
       return 0;
    }
