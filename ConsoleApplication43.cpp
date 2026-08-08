//ĐỀ THI HỌC SINH GIỎI CẤP TRƯỜNG THPT THẠCH THẤT HÀ NỘI 25-26 (Bai 5)
#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
#include<unordered_map>
using namespace std;
bool check(int n)
{
    double k = sqrt(n);
    if (k == (int)k) return true;
    else return false;
}

int main()
{
    int m;
    cin >> m;
    vector<int> a(m);
    for (int i = 0;i < m;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    unordered_map<long long, long long> mp;
    for (int x : a)
    {
        mp[x]++;
    }
    long long cnt = 0;
    long long k = 0;
    if (a[0] != 0)
    {
        cout << "0";
        return 0;
    }
    else
    {
        for (int i = 0;i < m;i++)
        {
            if (check(a[i]))
            {
                k = ((sqrt(a[i]) + 1) * (sqrt(a[i]) + 1));
                cnt += mp[k];
            }
            if (cnt == 0)
            {
                cout << k;
                return 0;
            }
            else
            {
                cnt = 0;
                continue;
            }
            
        }
    }
}

