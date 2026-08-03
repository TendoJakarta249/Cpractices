//ĐỀ THI MINH HỌA 10 CHUYÊN HÙNG VƯƠNG PHÚ THỌ (BÀI 1)
#include <iostream>
using namespace std;

int main()
{
    long long  n;
    cin>> n;
    if (n <= 100) cout << (450 * n);
    else if (100 < n && n <= 150) cout << (45000 + (n - 100) * 750);
    else cout << (45000 + 37500 + (n-150) * 950);
}


