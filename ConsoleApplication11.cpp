//ĐỀ THAM KHẢO TUYỂN SINH 10 CHUYÊN PHÚ THỌ 2026-2027 (BAI 2)
#include <iostream>
#include <cmath>
#include<vector>
#include <algorithm>
using namespace std;
int a[1000000];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	/*long long cnt = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = i+1;j < n;j++)
		{
			if (abs(a[i] - a[j]) % m == 0) cnt++;
		}
	}
	cout << cnt;*/ //Time limit exceed;
	vector<long long> cnt(m, 0);
	for (int i = 0;i < n;i++)
	{
		int k = a[i] % m;
		cnt[k]++;
	}
	long long ans = 0;
	for (int i = 0;i < m;i++)
	{
		ans += cnt[i] * (cnt[i] - 1) / 2;
	}
	cout << ans;
}

