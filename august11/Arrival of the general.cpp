#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int maxVal = *max_element(a.begin(), a.end());
    int minVal = *min_element(a.begin(), a.end());

    int posMax = -1;
    int posMin = -1;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == maxVal)
        {
            posMax = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (a[i] == minVal)
        {
            posMin = i;
            break;
        }
    }

    int moves = posMax + (n - 1 - posMin);
    if (posMax > posMin)
        --moves;
    cout << moves << '\n';
    return 0;
}