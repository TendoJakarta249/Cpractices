//ĐỀ THI TUYỂN SINH 10 CHUYÊN PTNK 2025 (BÀI 4)
#include <iostream>
using namespace std;
int f[50], s[50], d[1300];

int main()
{
    int n, s_max, D;
    cin >> n >> s_max;
    for (int i = 0;i < n;i++)
    {
        cin >> f[i] >> s[i];
    }
    cin >> D;
    if (D > 0)
    {
        for (int i = 0;i <= D;i++)
            cin >> d[i];
    }
    long long ans = 0;
    long long presum = 0;
    long long preprice = 0;
    if (D > 0)
    {
        for (int i = 0;i <= D;i++)
        {
            presum += s[d[i]-1];
            preprice += f[d[i]-1];
        }
    }
    ans = preprice;
    for (int left = 0;left < n;left++)
    {
        long long sum = presum;
        long long price = preprice;
        for (int right = left;right < n;right++)
        {
            if (sum + s[right] <= s_max)
            {
                sum += s[right];
                price += f[right];
                ans = max(ans, price);
            }
            else break;
        }
    }
    cout << ans;
    //Sửa đề thành bỏ cái phụ thuộc D và tập con thành các đoạn con liên tiếp =)))
}
