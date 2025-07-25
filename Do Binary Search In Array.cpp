#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int n, a;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> a;

    int low = 0;
    int high = n - 1;
    int mid;
    bool found = false;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == a) {
            cout << mid << endl;  // print index if found
            found = true;
            break;
        }
        else if (arr[mid] < a) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout <<"Element not found" << endl; 
    }

    return 0;
}
