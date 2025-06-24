#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   int x=min(a,b);
   int y=max(a,b);
   int sum=0;
   for(int i=x;i<=y;i++){
    if(i%2!=0){
        sum=sum+i;

        }

   }
   cout<<sum<<endl;
    return 0;
}
