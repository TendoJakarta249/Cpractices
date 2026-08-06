/* //HSG LỚP 10 QUẢNG TRỊ 25-26
#include <iostream>
#include<cmath>
using namespace std;
bool prime(long long n)
{
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    for (int i = 2;i <= sqrt(n);i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;
    double euler = n;
    for (int i = 2;i <= n;i++)
    {
        if (n % i == 0 && prime(i)) euler *= (1 - 1.0 / i);
    }
    cout << euler;
} */
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long ans = n;

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans = ans / i * (i - 1);

            while (n % i == 0)
                n /= i;
        }
    }

    // nếu còn n > 1 thì n là một số nguyên tố
    if (n > 1)
        ans = ans / n * (n - 1);

    cout << ans;

    return 0;
}
