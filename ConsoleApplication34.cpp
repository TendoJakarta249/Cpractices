//Đề tham khảo tuyển sinh 10 chuyên môn Tin học (chuyên) 2025 – 2026 sở GD&ĐT Nam Định (Bài 4)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n, c;
    cin >> n >> m >> c;
    vector<int> p(n), q(n), r(n);
    for (int i = 0;i < n;i++)
    {
        cin >> p[i] >> q[i] >> r[i];
    }
    vector<int> dp(m+1, 0);
    for (int i = 0;i < n;i++)
    {
        int value = r[i] - q[i];
        for (int j = m;j >= p[i];j--)
        {
            dp[j] = max(dp[j], dp[j - p[i]] + value);
        }
    }
    cout << dp[m] - c;
}
