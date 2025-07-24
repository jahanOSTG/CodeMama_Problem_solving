#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int iw;
    cin>>iw;
    if(iw>=1000)cout<<0<<endl;
    else{
        int a=1000-iw;
        int b=a/2;
        cout<<b<<endl;
    }

    return 0;
}
