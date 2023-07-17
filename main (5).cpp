#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Nhập số phần tử của mảng: "; cin >> n;
    
    int a[n];
    cout << "Nhập các phần tử của mang: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int max = a[0];
    for(int i=0; i<n; i++){
        if(a[i] > max) {
            max = a[i];
        }
    }
    
    cout << "Phần tử lón nhất là: " <<  max;
    
    return 0;
}
