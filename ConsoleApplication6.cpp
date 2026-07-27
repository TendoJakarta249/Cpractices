#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long sum = 0;
    for (int i = 0;i < s.size()-1; i++)
    {
        if (s[i] == 'a')
        {
            int r = i + 1;
            string num = "";
            while (r < s.size() && isdigit(s[r]))
            {   
                num += s[r];
                r++;
            }
            sum += stoll(num);
        }
    }
    cout << sum;
}
