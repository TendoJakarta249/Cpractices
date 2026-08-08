//ĐỀ THI HỌC SINH GIỎI CẤP TRƯỜNG THPT THẠCH THẤT HÀ NỘI 25-26 (Bai 3)
#include <iostream>
#include <numeric>
using namespace std;
int reverse(int n)
{
    int renum = 0;
    while (n > 0)
    {
        int h = n % 10;
        renum = renum * 10 + h;
        n = n / 10;
    }
    return renum;
}
bool check(int n)
{
    if (gcd(reverse(n), n) == 1) return true;
    else return false;
}

int main()
{
    int m,n;
    cin >> m >> n;
    long long cnt = 0;
    for (int i = m;i <= n;i++)
    {
        if (check(i)) cnt++;
    }
    cout << cnt;
}
