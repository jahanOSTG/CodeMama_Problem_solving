#include <bits/stdc++.h>
using namespace std;
     
int age(int fAge,int sAge){
    return fAge-(sAge*2);
  }
  int main() {

  int fAge,sAge;
  cin>>fAge>>sAge;
  int result=age(fAge,sAge);
  cout<<abs(result)<<endl;

    return 0;
}
