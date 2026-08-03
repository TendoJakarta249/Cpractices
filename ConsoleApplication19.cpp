//ĐỀ THI TUYỂN SINH 10 CHUYÊN QUẢNG NAM 2025-2026 (BÀI 1)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int u = a / x;
    int v = b / y;
    int m = a / y;
    int n = b / x;
    cout << min({ u + v, m + n, u + n, m + v });
}

