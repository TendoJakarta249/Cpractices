//HSG LỚP 10 QUẢNG TRỊ 25-26
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> a(m);
    for (int i = 0;i < m;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    a.erase(a.begin() + n,a.end());
    long long ans = a[n - 1] * n;
    cout << ans;
}