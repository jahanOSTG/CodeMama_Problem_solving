#include <bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
     
int main() {
    int num;
    cin>>num;
    string num_string=to_string(num);
    reverse(num_string.begin(),num_string.end());
    int target_num=stoi(num_string);
    cout<<target_num<<endl;


    return 0;
}
