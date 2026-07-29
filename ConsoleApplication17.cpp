///ĐỀ THAM KHẢO TUYỂN SINH 10 CHUYÊN NINH BÌNH 2026-2027 (BÀI 2)
#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    int ans = 0;
    int left = 0;
    int start = 0;
    vector<int> cnt(256, 0);
    for (int right = 0;right < n;right++)
    {
        cnt[s[right]]++;
        while (cnt[s[right]] > k)
        {
            cnt[s[left]]--;
            left++;
        }
        if (right  - left + 1 > ans)
        {
            ans = right - left + 1;
            start = left + 1;
        }
    }
    cout << ans << " " << start;
}