#include <iostream>
using namespace std;
struct student
{
int rollno;
int marks;
char grade; 
};
int findmax(int arr[],int n,int &index){
    int max=arr[0];
    index =0;
    for(int j=1;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
            index=j;
        }
    }
    return max;
    
}
int main() {
    int k;
    cout<<"enter the number of students:";
    cin>>k;
     student s[k];
     int marksarr[k];
    for(int i=0;i<k;i++){
        cout<<"enter the details for the student "<<i+1<<endl;
 
    cout<<"enter the roll no :"<<endl;
    cin>>s[i].rollno;
    cout<<"enter the marks :"<<endl;
    cin>>s[i].marks;
   marksarr[i]=s[i].marks;
    cout<<"enter the grade :"<<endl;
    cin>>s[i].grade;
    }
    cout<<"-----students records-------"<<endl;
    for(int i=0;i<k;i++){
        cout<<" |roll no:"<<s[i].rollno<<"|";
        cout<<" |marks  : "<<s[i].marks<<"|";
        cout<<" |grade  : "<<s[i].grade<<"|"<<endl;
    }
    int maxindex;
    int result = findmax(marksarr,k,maxindex);
     cout<<"the maximum marks are "<<result<<endl;
     cout<<"roll no of the student is  "<<s[maxindex].rollno<<endl;
     cout<<"grade of that student is "<<s[maxindex].grade<<endl;


     return 0;
}
