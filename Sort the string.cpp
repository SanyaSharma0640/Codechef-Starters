#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int ans=0;
	    for(int i=0;i<n-1;i++){
	        if(s[i]=='1' && s[i+1]=='0'){
	            ans++;
	        }
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
