#include <iostream>
#include<fstream>
using namespace std;

int main() {
    int a=34,b=10000;
    ofstream file("integer.txt");
    file<<a<<" "<<b;
    file.close();

   return 0;
}
