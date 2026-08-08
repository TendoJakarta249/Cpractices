//ĐỀ THI HỌC SINH GIỎI CẤP TRƯỜNG THPT THẠCH THẤT HÀ NỘI 25-26 (Bai 4)
#include <iostream>
#include<algorithm>
using namespace std;
int a[10000];

int main()
{
    int m;
    cin >> m;
    for (int i = 0;i < m;i++)
    {
        cin >> a[i];
    }
    long long cnt1 = 0;
    long long cnt2 =0;
    for (int i = 0;i < m;i++)
    {
        if (a[i] % 2 == 0) cnt1++;
        else cnt2++;
    }
    cout << min(cnt1, cnt2);
}

