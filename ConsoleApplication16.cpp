///ĐỀ THAM KHẢO TUYỂN SINH 10 CHUYÊN NINH BÌNH 2026-2027 (BÀI 5)
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    const long long MOD = 10000007;
    vector<long long> dp0(n+1);
    vector<long long> dp1(n+1);
    dp0[0] = dp1[0] = 0;
    dp1[1] = 1;
    dp0[1] = 2;
    for (int i = 2;i <n+1;i++)
    {
        dp1[i] = dp0[i - 1]%MOD;
        dp0[i] = 2 * (dp0[i - 1] + dp1[i - 1])%MOD;
    }
    long long ans = dp0[n] + dp1[n];
    cout << ans % MOD;
}

