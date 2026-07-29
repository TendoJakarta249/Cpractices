///ĐỀ THAM KHẢO TUYỂN SINH 10 CHUYÊN NINH BÌNH 2026-2027 (BÀI 3)
#include <iostream>
#include<unordered_map>
using namespace std;
int a[100000];

int main()
{
    int n, x;
    cin >> n >> x;
    /*for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    long long cnt = 0;
    for (int i = 0;i < n;i++)
    {
        for (int j = i + 1;j < n;j++)
        {
            if (a[i] + a[j] == x) cnt++;
        }
    }
    cout << cnt;*/
    long long ans = 0;
    unordered_map<long long, long long> cnt;
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
        if (cnt.count(x - a[i]))
            ans += cnt[x - a[i]];
        cnt[a[i]]++;
    }
    cout << ans;
}
