//ĐỀ THI MINH HỌA 10 CHUYÊN HÙNG VƯƠNG PHÚ THỌ (BÀI 4)
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> left(n), right(n);

    stack<int> st;

    // Tìm left[i]
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] <= a[i])
        {
            st.pop();
        }

        if (st.empty())
            left[i] = i + 1;
        else
            left[i] = i - st.top();

        st.push(i);
    }


    // Xóa stack để dùng lại
    while (!st.empty())
        st.pop();


    // Tìm right[i]
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            st.pop();
        }

        if (st.empty())
            right[i] = n - i;
        else
            right[i] = st.top() - i;

        st.push(i);
    }


    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += a[i] * left[i] * right[i];
    }

    cout << ans;

    return 0;
}

