#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0 || N == 1) {
        cout << 1 << endl;
        return 0;
    }

    long long prev2 = 1;  // ways(0)
    long long prev1 = 1;  // ways(1)
    long long current;

    for (int i = 2; i <= N; i++) {
        current = prev1 + prev2; // ways(N) = ways(N-1) + ways(N-2)
        prev2 = prev1;
        prev1 = current;
    }

    cout << current << endl;

    return 0;
}
