#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n;
    bool KT = true;
    
    cout << "Nhập số nguyên n: "; cin >> n;
    
    for(int i=2; i <= sqrt(n); i++){
        if(n % i == 0){
            KT = false;
            break;
        }
    }
    
    if(KT){
        cout << n << " là số nguyên tố.";
    }else {
        cout << n << " không là số nguyên tố.";
    }
    

    return 0;
}
