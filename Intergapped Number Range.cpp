#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    for(int i=l1; i<l2;i++){
        cout<<i<<" ";

    }
    for(int j=r2+1;j<=r1;j++){
        cout<<j<<" ";
    }

    return 0;
}
