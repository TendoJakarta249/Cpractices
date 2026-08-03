//ĐỀ THI TUYỂN SINH 10 CHUYÊN QUẢNG NAM 2025-2026 (BÀI 2)
#include <iostream>
#include<string>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    long long sum = 0;
    long long num = 0;
    bool hasNum = false;
    for (int i = 0;i < s.size();i++)
    {
        if (isupper(s[i])) ans += s[i];
        if (isdigit(s[i]))
        {
            hasNum = true;
            num = num * 10 + (s[i] - '0');
        }
        else
        {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    if(hasNum) ans += to_string(sum);
    cout << ans;
}
