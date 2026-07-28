//ĐỀ THI KHẢO SÁT CHẤT LƯỢNG MÔN THI VÀO 10 CHUYÊN LAM SƠN 2026-2027 (BÀI 3)
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    int n, u, v;
    cin >> n >> u >> v;
    int d;
    int a[100000];
        for (int j = 0;j < n;j++)
        {
            cin >> a[j];
        }
        long long l = LLONG_MIN;
    for (int i = u;i <= v;i++)
    {
        /* int right = 0;
        long long ans = LLONG_MIN;
        while (i + right <= n)
        {
            long long sum = 0;
            for (int x = right;x < (i + right);x++)
            {
                sum += a[x];
            }
            ans = max(ans, sum);
            right++;
        }*/
        //Code toi uu hon
        long long sum = 0;
        for (int x = 0;x < i;x++)
        {
            sum += a[x];
        }
        long long ans = sum;
        for (int start = 1;start + i <= n;start++)
        {
            sum -= a[start - 1];
            sum += a[start + i - 1];
            ans = max(ans, sum);
        }
        l = max(l, ans);
    }
    cout << l;
}

