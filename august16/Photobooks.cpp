#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<string> results;
    for (int i = 0; i <= s.size(); i++)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            string t = s.substr(0, i) + c + s.substr(i);
            results.insert(t);
        }
    }

    cout << results.size() << "\n";
    return 0;
}