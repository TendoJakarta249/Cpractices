//HSG LỚP 10 QUẢNG TRỊ 25-26
#include <iostream>
#include <cmath>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    /*vector<int> a(n);
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    int left = 0;
    long long cnt = 0;
    while (left < n)
    {
        for (int right = left+1;right < n;right++)
        {
            if (abs(a[left] - a[right]) == k) cnt++;
        }
        left++;
    }
    cout << cnt;*/
    unordered_map<long long, long long> mp;
    long long ans = 0;
    for (int i = 0;i < n;i++) 
    {
        long long x;
        cin >> x;
        ans += mp[x - k];
        ans += mp[x + k];
        mp[x]++;
    }
    cout << ans; 
}

