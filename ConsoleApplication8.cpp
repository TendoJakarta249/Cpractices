//ĐỀ THI KHẢO SÁT CHẤT LƯỢNG MÔN THI VÀO 10 CHUYÊN LAM SƠN 2026-2027 (BÀI 2)
#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int a[100000];
    string ans[100];
    for (int i = 0;i < n;i++)
    {
        cin >> k;
        for (int j = 0;j < k;j++)
        {
            cin >> a[j];
        }
        long long last = -4e18;
        bool check = true;
        for (int j = 0;j < k;j++)
        {
            bool ok = false;
            for (int x = -1;x <= 1;x++)
            {
                if ((a[j] + x) >= last)
                {
                    last = a[j] + x;
                    ok = true;
                    break;
                }
            }
            if (!ok) check = false;
        }
        if (check) ans[i] = "YES";
        else ans[i] = "NO";
    }
    for (int i = 0;i < n;i++)
    {
        cout << ans[i] << endl;
    }
}

