#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> cnt(8, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }

    vector<vector<int>> ans;

    while (cnt[1] > 0 && cnt[2] > 0 && cnt[4] > 0)
    {
        ans.push_back({1, 2, 4});
        cnt[1]--;
        cnt[2]--;
        cnt[4]--;
    }

    while (cnt[1] > 0 && cnt[2] > 0 && cnt[6] > 0)
    {
        ans.push_back({1, 2, 6});
        cnt[1]--;
        cnt[2]--;
        cnt[6]--;
    }

    while (cnt[1] > 0 && cnt[3] > 0 && cnt[6] > 0)
    {
        ans.push_back({1, 3, 6});
        cnt[1]--;
        cnt[3]--;
        cnt[6]--;
    }

    for (int i = 1; i <= 7; i++)
    {
        if (cnt[i] > 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    for (auto &g : ans)
    {
        for (int v : g)
            cout << v << " ";
        cout << "\n";
    }

    return 0;
}