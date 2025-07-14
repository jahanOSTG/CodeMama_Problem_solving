#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
     
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int num=max(a,{max(b,c)});
    cout<<num<<endl;
   

    return 0;
}
