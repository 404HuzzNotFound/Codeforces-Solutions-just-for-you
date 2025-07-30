#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x=0;
	cin>>n;
	while(n){
	    string s;
	    cin>>s;
	    if((s[0]=='+')||(s[2]=='+')){
	        x++;
	    }
	    if((s[2]=='-')||(s[1]=='-')){
	        x--;
	    }
	    n--;
	}
	cout<<x;
}
