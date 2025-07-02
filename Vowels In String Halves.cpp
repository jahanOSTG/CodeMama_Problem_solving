
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

    bool checkvowel(char c){
        c=tolower(c);
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    int main(){
        string s;
        
        cin>>s;
        int len=s.length();
        int mid=len/2;
        int count1=0;
        int count2=0;
        for(int i=0;i<mid;++i){
            if(checkvowel(s[i])){
                count1++;
            }
        }
         for(int i=mid;i<len;++i){
            if(checkvowel(s[i])){
                count2++;
            }
        }

        if(count1==count2){
                cout<<"true"<<endl;

        }else{
            cout<<"false"<<endl;
        }
    }

