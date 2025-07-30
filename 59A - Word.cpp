#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int count1=0, count2=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){ count1++; }
        else{ count2++; }
    }
    for(int i=0; i<s.length(); i++){
        if(count1==count2){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
        if(count1>count2){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-32;
            }
        }
        if(count1<count2){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s;
}
