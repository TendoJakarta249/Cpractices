//ĐỀ THI MINH HỌA 10 CHUYÊN HÙNG VƯƠNG PHÚ THỌ (BÀI 3)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> ans;
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (q--)
    {
        long long x;
        cin >> x;
        int pos = upper_bound(a.begin(), a.end(), x) - a.begin();
        ans.push_back(n - pos);
    }
    for (auto x : ans)
        cout << x << endl;
}

