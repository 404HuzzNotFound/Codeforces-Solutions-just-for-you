#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n; 
    int k;
    cin>>n>>k;
    for(int i=1; i<=k; i++){
        int temp=n;
        if(temp%10!=0){ n--; }
        if(temp%10==0){ n=n/10;}
    }
    cout<<n;
}
