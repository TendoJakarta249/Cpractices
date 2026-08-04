//Đề tham khảo tuyển sinh 10 chuyên môn Tin học (chuyên) 2025 – 2026 sở GD&ĐT Nam Định (Bài 2)
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;	
	cin >> s;
	long long sum = 0;
	long long num = 0;
	char op = '+';
	for (char c:s)
	{
		if (isdigit(c))
		{
			num = num * 10 + (c - '0');
		}
		else
		{
			if (op == '+') sum += num;
			else if (op == '-') sum -= num;
			num = 0;
			op = c;
		}
	}
	if (op == '+') sum += num;
	else if (op == '-') sum -= num;
	cout << sum;
}


