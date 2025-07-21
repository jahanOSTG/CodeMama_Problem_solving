
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    cin>>a;
    int hours = a / 3600;
    int minutes = (a % 3600) / 60;
    cout<< hours<< ":" <<minutes<<endl;

    return 0;
}
