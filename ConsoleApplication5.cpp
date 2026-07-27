#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, T;
    cin >> n >> T;
    vector<long long> a(n);
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int left = 0;
    long long sum = 0;
    for (int i = 0;i < n;i++)
    {
        sum += a[i];
        while (sum > T)
        {
            sum -= a[left];
            left++;
        }
        ans = max(ans, i - left +1);
    }
    cout << ans;
}
