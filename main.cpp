
#include <iostream>

using namespace std;

int main()
{
    float a, b;
    cout <<" Nhập a: "; cin >> a; 
    cout << "Nhập b: "; cin >> b;
    
    if( a==0 )
    {
     if(b==0){
         cout << "Phương trình vô số nghiệm.";
     }else {
         cout << "Phương trình vô nghiêm.";
     }
    }else {
        float x = -b/a;
        cout << "Phương trình có nghiệm: " << x;
    }

    return 0;
}
