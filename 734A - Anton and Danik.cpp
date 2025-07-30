#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, countA=0, countD=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='A'){countA++; }
        else{countD++; }
    }
    if(countA > countD){cout<<"Anton"; }
    if(countA < countD){cout<<"Danik"; }
    if(countA == countD){cout<<"Friendship"; }
}
