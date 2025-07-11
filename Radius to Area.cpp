#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {
    int r;
    double result;
    cin >> r;
    result = 3.14 * r * r;  

    cout << fixed << setprecision(2);
    cout << "The area of the circle is " << result << " square units." << endl;

    return 0;
}
