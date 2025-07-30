#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, count=0;
    cin>>x;
    while(x>=5){
        x=x-5;
        count++;
    }
    while(x>=4){
        x=x-4;
        count++;
    }
    while(x>=3){
        x=x-3;
        count++;
    }
    while(x>=2){
        x=x-2;
        count++;
    }
    while(x>=1){
        x=x-1;
        count++;
    }
    cout<<count;
}
