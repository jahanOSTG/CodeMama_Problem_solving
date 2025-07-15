#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int id,quantity;
    cin>>id>>quantity;
    int prize;
    if(id==101){
        prize=quantity*10;
    }else if(id==202){
        prize=quantity*25;
    }else if(id==303){
        prize=quantity*5;
    }
    cout<<prize<<endl;
   

    return 0;
}
