#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> distinctChars(s.begin(), s.end());

    if (distinctChars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
