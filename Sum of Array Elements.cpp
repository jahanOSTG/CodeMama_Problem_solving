#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int n;
      cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double median;
    if(n%2==0){
        median=(arr[n/2-1]+arr[n/2])/2.0;
    }else{
        median=arr[n/2];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(median>arr[i]){
           sum=sum+arr[i];
    }
  }
  cout<<sum<<endl;
  return 0;
}
