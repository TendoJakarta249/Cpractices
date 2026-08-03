//ĐỀ THI MINH HỌA 10 CHUYÊN HÙNG VƯƠNG PHÚ THỌ (BÀI 2)
#include <iostream>
#include<cmath>
using namespace std;
bool check(int n)
{
	if (n < 2) return false;
	if (n == 2 || n==3) return true;
	for (int i = 2;i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int l, r;
	cin >> l >> r;
	long long sum = 0;
	for (int i = l;i <= r;i++)
	{
		if (check(i)) sum++;
	}
	cout << (r-l+1-sum);
}