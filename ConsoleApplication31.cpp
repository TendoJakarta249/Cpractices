//Đề tham khảo tuyển sinh 10 chuyên môn Tin học (chuyên) 2025 – 2026 sở GD&ĐT Nam Định (Bài 1)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double a2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double a3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    if (a1 + a2 > a3 && a3 + a2 > a1 && a1 + a3 > a2) cout << "1";
    else cout << "0";
}
