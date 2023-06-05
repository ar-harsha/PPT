#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool shift(string &s1,string &s2){
	if(s1.size()!=s2.size()) return false;
	int start = 0;
	for(start;start<s1.size();start++){
		if(s1[start]==s2[0]){
			break;
		}
	}
	int n=s1.size();
	for(int i=0;i<n;i++){
		if(s1[(start+i)%n]!=s2[i]){
			return false;
		}
	}
	return true;
}

int main(){
	string s1="abcde",s2="cdeab";
	bool ans = shift(s1,s2);
	cout<<ans<<endl;
	return 0;
}