//ĐỀ THAM KHẢO TUYỂN SINH 10 CHUYÊN PHÚ THỌ 2026-2027 (BAI 3)
#include <iostream>
#include <vector>
using namespace std;
int chuso(long long t)
{
    if (t == 0) return 1;
    long long num = 0;
    while (t > 0)
    {
        long long k = t % 10;
        num++;
        t /= 10;
    }
    return num;
}
bool check(int n)
{
    long long h = 1LL * n * n;
    int p = chuso(n);
    long long j = 1;
    for (int i = 1;i <= p;i++)
    {
        j *= 10;
    }
    long long left = h / j;
    long long right = h % j;
    if ( left + right == n && chuso(1LL*n * n) <= 2 * chuso(n)) return true;
    else return false;
}

int main()
{
    int l, r;
    long long cnt = 0;
    cin >> l >> r;
    vector<int> a;
    for (int i = l;i <= r;i++)
    {
        if (check(i))
        {
            cnt++;
            a.push_back(i);
        }
    }
    cout<< cnt << endl;
    for (int i = 0;i < a.size();i++)
    {
        cout << a[i] << " ";
    }
}
