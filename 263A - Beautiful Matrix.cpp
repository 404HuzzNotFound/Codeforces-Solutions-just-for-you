#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5][5];
    int count=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j]==1){
                if(i>2){ count=count+i-2; }
                if(i<2){ count=count+2-i; }
                if(j>2){ count=count+j-2; }
                if(j<2){ count=count+2-j; }
                break;
            }
      }
    }
    cout<<count;
}
