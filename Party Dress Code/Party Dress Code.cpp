#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    int T;

    cin >> S;
    cin >> T;


    if (S == "casual" && T >= 15 && T <= 25) {
        cout << "Jeans and a light jacket." << endl;
    }

    else if (S == "festive" && T > 25) {
        cout << "Colorful dress and sandals." << endl;
    }

    else {
        cout << "Wear what you're comfortable in." << endl;
    }

    return 0;
}
