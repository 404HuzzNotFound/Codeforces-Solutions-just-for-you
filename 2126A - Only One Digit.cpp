#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t){
	    int x;
	    cin>>x;
	    string str=to_string(x);
	    char max=str[0];
	    for(int i=0; i<str.length(); i++){
	        if(max>str[i]){
	            max=str[i];
	        }
	    }
	    cout<<max<<endl;
	    t--;
	}
}
