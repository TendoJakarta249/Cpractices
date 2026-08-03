//ĐỀ THI TUYỂN SINH 10 CHUYÊN PTNK 2025 (BÀI 1)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> s(t);
    for (int i = 0;i < t;i++)
    {
        cin >> s[i];
    }
    long long cnt = 0;
    long long ans = 0;
    //for (int i = 0;i < t - 1;i++)
    //{
    //    if (s[i] == "ONLINE" && s[i + 1] == "ONLINE")
    //    {
    //        cnt++;
    //        ans = max(ans, cnt + 1);
    //    }
    //    /*else {
    //        if (cnt > 0)
    //        {
    //            ans = max(ans, cnt + 1);
    //            cnt = 0;
    //        }
    //        else cnt = 0;
    //    }*/
    //    else cnt = 0;
    //}
    //if (cnt == 0) cout << 0;
    //else
    //    cout << ans; //thuat toan hoi xam :((
    for (int i = 0;i < t;i++)
    {
        if (s[i] == "ONLINE")
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else cnt = 0;
    }
    cout << ans;
}

