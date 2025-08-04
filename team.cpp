#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while (n--) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        int sure = petya + vasya + tonya;

        if (sure >= 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
