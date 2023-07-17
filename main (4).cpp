#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int a = 9;
    int b = 18;
    int c = 29;
    
    if(a > b && a > c){
        cout << a << " là số lớn nhất.";
    }else if (b > a && b > c){
        cout << b << " là số lớn nhât.";
    }else {
        cout << c << " là số lớn nhất.";
    }
    
    return 0;
}
