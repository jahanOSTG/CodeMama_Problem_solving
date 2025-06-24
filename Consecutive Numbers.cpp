#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    bool check=true;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i] != 1){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;;
    }
    return 0;
}
