///ĐỀ THAM KHẢO TUYỂN SINH 10 CHUYÊN NINH BÌNH 2026-2027 (BÀI 4)
#include <iostream>
#include <cmath>
using namespace std;
long long a[1000000];

int main()
{
    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    /*int left = 0;
    long long ans = 0;
    while (left <= n - 2)
    {
        long long sum = a[left] - a[left + 1];
        ans = max(ans, sum);
        if (left % 2 == 0)
        {
            for (int i = left + 2;i < n;i++)
            {
                if (i % 2 == 0)
                {
                    sum += a[i];
                    ans = max(ans, sum);
                }
                   
                if (i % 2 != 0)
                {
                    sum -= a[i];
                    ans = max(ans, sum);
                }
            }
        }
        if (left % 2 != 0)
        {
            for (int i = left + 2;i < n;i++)
            {
                if (i % 2 == 0)
                {
                    sum -= a[i];
                    ans = max(ans, sum);
                }

                if (i % 2 != 0)
                {
                    sum += a[i];
                    ans = max(ans, sum);
                }
            }
        }
        left++;
    }*/ //TLE
    long long plus = a[0];
    long long minus = -1e18;
    long long ans = plus;
    for (int i = 1;i < n;i++)
    {
        long long new_plus = max(a[i], minus + a[i]);
        long long new_minus = plus - a[i];
        plus = new_plus;
        minus = new_minus;
        ans = max({ ans,minus,plus });
    }
    cout << ans;
}

