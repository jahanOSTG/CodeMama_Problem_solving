#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int s,e;
    int hour;
    cin>>s>>e;
    if(s>=e){
        hour=(24-s)+e;
    }else{
        hour=e-s;
    }
    cout<<hour<<endl;

   

    return 0;
}
