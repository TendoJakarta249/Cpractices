//ĐỀ THI TUYỂN SINH 10 CHUYÊN PTNK 2025 (BÀI 2)
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n, p, d;
	cin>>n>>p>>d;
	vector<int> a(n + 2,0);
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	a[n + 1] = d;
	int left = 0;
	long long cnt = 0;
	while (left < n + 1 && a[n + 1] - a[left] > p) 
	{
		for (int right = n;right > left;right--)
		{
			if (a[right] - a[left] <= p)
			{
				left = right;
				cnt++;
				break;
			}
		}
		if (left == 0)
		{
			cout << "-1";
			return 0;
		}
	}
	cout << cnt;
}
