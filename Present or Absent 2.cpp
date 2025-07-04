
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i] >=l && arr[i] <= r){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"P"<<endl;
    }else{
        cout<<"A"<<endl;
    }




}
