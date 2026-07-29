//ĐỀ THAM KHẢO TUYỂN SINH 10 CHUYÊN NINH BÌNH 2026-2027 (BÀI 1)
#include <iostream>
#include<cmath>
#include<vector>
#include <string>
using namespace std;

int main()
{
    int q;
    cin >> q;
    int x, y;
    vector<string> ans;
    for (int i = 1;i <= q;i++)
    {
        cin >> x >> y;
        int u = x + y;
        int v = x - y;
        if (v<0) ans.push_back("No solution");
        else 
        {
            if (u % 2 != 0) ans.push_back("No solution");
            else
            {
                if (u >= v)
                    ans.push_back(to_string(v / 2) + " " + to_string(u / 2));
                if (v > u)
                    ans.push_back(to_string(u / 2) + " " + to_string(v / 2));
            }
        }
    }
    for (string s : ans)
    {
        cout << s << endl;
    }
    /*for (int i = 0;i < ans.size();i++)
    {
        string s = ans[i];
        cout << s << endl;
    }*/
}

