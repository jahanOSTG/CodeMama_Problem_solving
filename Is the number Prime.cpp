#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1)return false;

    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }

    return true;
}
int main() {
    int number;

    cin >> number;

    if (isprime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}

