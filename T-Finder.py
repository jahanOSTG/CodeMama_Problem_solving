#include <bits/stdc++.h>
#include<string>
using namespace std;
     
int main() {
    /**
    * Write your C++ code from here
    */
    string s;
    int count=0;
    for(int i=0;i<10;i++){
        cin>>s;
        if(s.find('T') != string::npos){
            count++;
        }
        
    }
    cout<<count<<endl;

    return 0;
}
