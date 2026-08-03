//ĐỀ THI TUYỂN SINH 10 CHUYÊN QUẢNG NAM 2025-2026 (BÀI 3)
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<int> v(n);
    for (int i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    cin >> p;
    vector<int> k(p);
    for (int j = 0;j < p;j++)
    {
        cin >> k[j];
    }
    sort(v.begin(), v.end());
    vector<long long> s(n);
    s[n - 1] = v[n - 1];
    for (int i = n - 2;i >= 0;i--)
    {
        s[i] = s[i + 1] + v[i];
    }
    for (int j = 0;j < k.size();j++)
    {
        int pos = lower_bound(v.begin(), v.end(), k[j]) - v.begin(); //Tìm ví trí đầu tiên mà v[i] >= k[j]
        if (pos == n) cout << 0;
        else cout << s[pos] << endl;
    }
}

