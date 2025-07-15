#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    if (A + B <= N)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
