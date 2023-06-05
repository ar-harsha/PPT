#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isomorphic(string &s1,string &s2){
	unordered_map<char,char> m1,m2;
	if(s1.size()!=s2.size()){
		return false;
	}
	for(int i=0;i<s1.size();i++){
		if(m1.find(s1[i])!=m1.end()){
			if(m1[s1[i]]!=s2[i]) return false;
		}
		else m1[s1[i]]=s2[i];
		if(m2.find(s2[i])!=m2.end()){
			if(m1[s2[i]]!=s1[i]) return false;
		}
		else m1[s2[i]]=s1[i];
	}

	return true;

}

int main(){
	string s1="add",s2="egg";
	bool ans = isomorphic(s1,s2);
	cout<< ans << endl;
	return 0;
}