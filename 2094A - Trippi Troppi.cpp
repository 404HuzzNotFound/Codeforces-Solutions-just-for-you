#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();   //ignore() is used here to ignore the ' ' in the space after 't';
    while(t!=0){
        string s;
        getline(cin,s); 
        int leng = s.length();
        for(int i=0;i!=leng;i++){
            if(i==0){
                cout<<s[0];
            }
            if(s[i]==' '){
                cout<<s[i+1];
            }
        }
        cout<<endl;        
        t--;
    }
}
