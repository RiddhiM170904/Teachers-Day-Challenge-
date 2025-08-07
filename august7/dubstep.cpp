#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string remix;
    cin >> remix;
    string original;
    for (size_t i = 0; i < remix.size(); ) {
        if (remix.substr(i, 3) == "WUB") {
            original += ' ';
            i += 3;
        } else {
            original += remix[i];
            i++;
        }
    }

    stringstream ss(original);
    string word;
    while (ss >> word) {
        cout << word << " ";
    }

    return 0;
}
