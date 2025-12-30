#include <iostream>
using namespace std;

int main() {
int arr[4]={10,20,30,40};
 int max =arr[0];
for(int i=0;i<=4;i++){
    
   
    if (arr[i] > max){
        max=arr[i];
    }
   
} cout<<"maximum element of array is:  "<<max<<endl;


   return 0;
}
