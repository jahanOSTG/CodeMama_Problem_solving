#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,r;
    cin>>a>>b>>r;
    float p=sqrt(a*a+b*b);
    float q=2*r;
    if(p<=q){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    return 0;
}
