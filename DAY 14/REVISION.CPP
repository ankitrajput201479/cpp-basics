#include <iostream>
using namespace std;
 int findmax(int arr[],int n){
        int max = arr[0];
        for(int i=0;i<n;i++){
            if (arr[i]>max){
                max=arr[i];
            }

        }
        return max;
    }
int main() {
    int arr[5] ={ 23,56,74,77,100};
    int result = findmax(arr,5);
    cout<<"the maximum element is : "<<result<<endl;
   

   return 0;
}
