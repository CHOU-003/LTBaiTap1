#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n;
    
    do {
        cout << "Nhập số nguyên n: "; cin >> n;  
            if(n < 0){
                cout << "Nhập lại n lớn hơn 0 !!!" << endl;
            }
    }while(n < 0);

    int S = 0;
    while(n > 0){
        S += n % 10;
        n /= 10;
    }
    
    cout << "Tổng là: " << S;
    
    return 0;
}
