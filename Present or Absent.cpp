#include<iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool found=false;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            found=true;
            break;


    }
    }
    if(found){
              cout << "P" << endl;
        } else {
            cout << "A" << endl;
        }


    return 0;
}
