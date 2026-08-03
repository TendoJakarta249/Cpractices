//ĐỀ THI TUYỂN SINH 10 CHUYÊN PTNK 2025 (BÀI 3)
#include <iostream>
#include <string>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<int>> dp(n,vector<int>(n,0));
    for (int i = 0;i < n;i++) dp[i][i] = 0;
    for (int len = 2;len <= n;len++)
    {
        for (int i = 0;i + len - 1 < n;i++)
        {
            int j = i + len - 1;
            if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
            else dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
        }
    }
    cout << dp[0][n - 1];
}
