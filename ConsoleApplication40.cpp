//ĐỀ THI HỌC SINH GIỎI CẤP TRƯỜNG THPT THẠCH THẤT HÀ NỘI 25-26 (Bai 2)
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int x, y, z, t;
    cin >> t;
    vector<string> ans;
    for (int i = 1;i <= t;i++)
    {
        cin >> x >> y >> z;
        if (x + y + z == 180)
        {
            if (x == 90 || y == 90 || z == 90) ans.push_back("vuong");
            else if (x < 90 && y < 90 && z < 90) ans.push_back("nhon");
            else ans.push_back("tu");
        }
        else ans.push_back("0");
    }
    for (int i = 0;i < ans.size();i++)
    {
        cout << ans[i] << endl;
    }
}


