#include <iostream>
#include<algorithm>
#include<string>
using namespace std;


int main() {
    string s;
    cin>>s;
    string r=s;
    reverse(s.begin(),s.end());
    if(s==r){
        cout<<r << " is a palindrome number" << endl;
    }else{
        cout<<r << " is not a palindrome number" << endl;
    }

    return 0;
}
