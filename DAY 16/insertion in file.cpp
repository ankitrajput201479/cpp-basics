#include <iostream>
#include<fstream>
using namespace std;

int main() {
    string a="orr kyaa haal";
    ofstream file("data.txt"); //here my class name is file and file name is 'data.txt'
    file<<"hello\n";
    file<<"this is my first program of file handling"<<endl;
    file<<a;
    file.close();

   return 0;
}
