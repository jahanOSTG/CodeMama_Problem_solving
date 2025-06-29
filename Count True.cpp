#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    int count=0;
    for(int i=0;i<t;i++){
        cin>>arr[i];

        if(arr[i]==1){
            count++;
        }
    }
    cout<<count<<endl;




}

