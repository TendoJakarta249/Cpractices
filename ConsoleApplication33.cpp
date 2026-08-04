//Đề tham khảo tuyển sinh 10 chuyên môn Tin học (chuyên) 2025 – 2026 sở GD&ĐT Nam Định (Bài 3)
#include <iostream>
using namespace std;
int a[1000];

int main()
{
    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    long long cnt = 0;
    long long ans = 0;
    for (int i = 1;i < n-1;i++)
    {
        if (a[i - 1]<a[i] && a[i]>a[i + 1] || a[i - 1] > a[i] && a[i] < a[i + 1])
        {
            cnt++;
            ans = max(ans, cnt + 2);
        }
        else cnt = 0;
    }
    cout << ans;
}
