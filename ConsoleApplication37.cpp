//HSG LỚP 10 QUẢNG TRỊ 25-26
#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long cnt = 0;
    for (int i = 0;i < n;i++)
    {
        if (a[i] == a[n - 1]) cnt++;
    }
    cout << cnt;
}
