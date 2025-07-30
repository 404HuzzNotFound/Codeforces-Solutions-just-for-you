#include <bits/stdc++.h>
using namespace std;

int main() {
	int w, count=0;
	cin>>w;
	for(int i=1; i<w; i++){
	   if(i%2==0){
	    if((w-i)%2==0){
	        cout<<"YES";
	        count++;
	        break;
	    }
	  }
	}
	if(count==0){
	    cout<<"NO";
	}
}
