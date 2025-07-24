#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int positive=0;
    int negative=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            negative++;
        }else{
            positive++;
        }
    }
    if(negative>=positive){
        cout<<"Negativity"<<endl;
    }else{
        cout<<"Positivity"<<endl;
    }
    return 0;
}
