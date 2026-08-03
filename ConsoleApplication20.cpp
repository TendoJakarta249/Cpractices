//ĐỀ THI TUYỂN SINH 10 CHUYÊN QUẢNG NAM 2025-2026 (BÀI 2)
#include <iostream>
using namespace std;
long long a[10];
int check(long long n)
{
	long long sum = 0;
	long long multi = 1;
	for (int i = 1;i <= n;i++)
	{
		sum += i;
	}
	for (int i = 1;i <= n;i++)
	{
		multi *= i;
	}
	if (multi % sum == 0) return true;
	else return false;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	for (int i = 0;i < n;i++)
	{
		if (check(a[i])) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}


