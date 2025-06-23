#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    bool isRepdigit = true;

    for (int i = 0; i < n.length() - 1; i++) {
        if (n[i] != n[i + 1]) {
            isRepdigit = false;
            break;
        }
    }

    if (isRepdigit) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
