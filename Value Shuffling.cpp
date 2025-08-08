#include<iostream>
#include<string>
 
 using namespace std;
 int main(){
     int a,b,c;
     string str;
     cin>>a>>b>>c;
     cin>>str;
  for(int i=0;i<str.length();i++){
        char ch=str[i];
        if (ch == 'A') cout << c << " ";
        else if (ch == 'B') cout << a << " ";
        else if (ch == 'C') cout << b << " ";
     }
 return 0;
 }
