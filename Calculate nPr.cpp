#include <bits/stdc++.h>
using namespace std;
int factorial( int n){
    int fact=1;
    for(int i=1; i<=n ;i++){
        fact=fact*i;

    }
      return fact;
}

int main() {
    
    int n,r;
    cin>>n>>r;
    int ans=factorial(n)/factorial(n-r);
    cout<<ans<<endl;

    return 0;
}
