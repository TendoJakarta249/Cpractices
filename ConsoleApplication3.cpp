//ĐỀ MINH HỌA THI TUYỂN SINH 10 ĐỒNG THÁP 2026-2025 (BÀI 1)
#include <iostream>
#include<cmath>
using namespace std;
bool check(int n)
{
    if (n < 0) return false;
    int r = sqrt(n);
    return r * r == n;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b;i++)
    {
        if (check(i)) cnt++;
    }
    cout << cnt;
}
