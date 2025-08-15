#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long p, c;
    cin >> p;
    int len = 1, mx = 1;
    for (int i = 1; i < n; i++)
    {
        cin >> c;
        if (c >= p)
            len++;
        else
            len = 1;
        if (len > mx)
            mx = len;
        p = c;
    }
    cout << mx;
}
