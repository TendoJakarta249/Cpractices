//ĐỀ THAM KHẢO TUYỂN SINH 10 CHUYÊN PHÚ THỌ 2026-2027 (BAI 1)
#include <iostream>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    long long sum = 0;
    /*if (k % 2 == 0)
    {
        for (int i = 2;i <= k;i=i+2) sum -= b;
        for (int i = 1;i <= k - 1;i = i + 2) sum += a;
    }
    else
    {
        for (int i = 2;i <= k-1;i = i + 2) sum -= b;
        for (int i = 1;i <= k;i = i + 2) sum += a;
    }*/ //Time Limit
    sum = (k / 2) * (a - b);
    if (k % 2 == 1) sum += a;
    cout << sum;
}

