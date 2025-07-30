#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count=0, sum=0;
	cin>>n;
	int arr[n][3];
	for(int i=0; i<n; i++){
	    for(int j=0; j<3; j++){
	        cin>>arr[i][j];
	    }
	}
	for(int i=0; i<n; i++){
	    for(int j=0; j<3; j++){
	        if(arr[i][j]==1){
	            count++;
	        }
	        if(count>=2){
	        count=0;
	        sum++;
	        }
	    }
	    if(count<2){
	        count=0;
	    }
	}
	cout<<sum;
}
