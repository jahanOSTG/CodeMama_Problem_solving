#include <bits/stdc++.h>
#include<cmath>
using namespace std;
     
int main() {
    /**
    * Write your C++ code from here
    */
    int a,b,c;
    cin>>a>>b>>c;
    int result=min(c,{min(a,b)});
    cout<<result<<endl;

    return 0;
}
