#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
     
int main() {
   
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];

   }
   sort(arr,arr+n);
   cout<<arr[n/2]<<endl;

    return 0;
}
