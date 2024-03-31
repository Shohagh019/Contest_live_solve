#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long int a, b, c;
        cin >> a >> b >> c;
        if (b % 3 == 1) {
            b += 2;
            c -= 2;
        } else if (b % 3 == 2) {
            b += 1;
            c -= 1;
        }
        long long int tents = 0;
        if (c < 0) {
            cout << "-1" << endl;
            continue;
        } else {
            tents += a;
            tents += b / 3;
            tents += c / 3;
            if (b % 3 != 0 || c % 3 != 0)
                tents += 1;
        }
        cout << tents << endl;
    }
    return 0;
}

