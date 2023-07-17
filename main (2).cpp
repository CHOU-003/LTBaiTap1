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
    for(int i=0; i<=n; i++){
        S += i;
    }
    
    cout << "Tổng là: " << S;
    
    return 0;
}
