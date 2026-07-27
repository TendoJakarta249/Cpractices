//ĐỀ MINH HỌA THI TUYỂN SINH 10 ĐỒNG THÁP 2026-2025 (BÀI 2)
#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000], b[1000];
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    int h = a[0];
    for (int i = 0;i < n;i++)
    {
        if (a[i] < h)
        {
            h = a[i];
        }
    }
    long long cnt = 0;
    vector<int> ans;
    for (int i = 0;i < n;i++)
    {
        if (a[i] > h)
        {
            cnt++;
            ans.push_back(a[i] - h);
        }
    }
    sort(ans.begin(), ans.end());
    if (cnt == 0) cout << cnt;
    if (cnt > 0)
    {
        cout << cnt << endl;
        for (int i = 0;i < ans.size();i++)
        {
            cout << ans[i] << " ";
        }
    }
}
