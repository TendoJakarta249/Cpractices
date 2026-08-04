//Đề tham khảo tuyển sinh 10 chuyên môn Tin học (chuyên) 2025 – 2026 sở GD&ĐT Nam Định (Bài 5)
#include <iostream>
using namespace std;
int gt(int n)
{
    int multi = 1;
    for (int i = 1;i <= n;i++)
    {
        multi *= i;
    }
    return multi;
}

int main()
{
    int a, b, m, n, m1, n1, d;
    cin >> a >> b;
    cin >> d;
    cin >> m >> n;
    if (d == 1)
    {
        int ans1 = gt(a) / (gt(a - m) * gt(m));
        int ans2 = gt(b) / (gt(b - n) * gt(n));
        cout << (ans1 * ans2);
    }
    else if (d == 2)
    {
        cin >> m1 >> n1;
        int ans1 = gt(a) / (gt(a - m) * gt(m));
        int ans2 = gt(b) / (gt(b - n) * gt(n));
        int ans1m = gt(a-1) / (gt(a - m) * gt(m-1));
        int ans2n = gt(b-1) / (gt(b - n) * gt(n-1));
        cout << (ans1 * ans2-ans1m*ans2n);
    }
}
