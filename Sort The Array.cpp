#include <iostream>
using namespace std;

void bubble_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {     //outer loop
        for (int j = 0; j < n - 1 - i; j++) {   //inner loop
            if (a[j] > a[j + 1]) { //swap condition
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

//print the sorted array

void printArray(int a[], int n) {
 
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}

int main() {
    int n;
   
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //function call
    bubble_sort(a, n);
    printArray(a, n);


}
