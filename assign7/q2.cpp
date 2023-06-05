#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool strobogrammatic(string &s1){
	unordered_map<char,char> map;
	map['0']='0';
	map['1']='1';
	map['2']='2';
	map['5']='5';
	map['6']='9';
	map['9']='6';
	map['8']='8';
	int j=0;
	for(int i=s1.size()-1;i>=0;i--){
		if(map.find(s1[i])==map.end()) return false;
		if(map[s1[i]]==s1[j]){
			j++;
		}
		else return false;
	}
	return true;
}

int main(){
	string s1="619";
	bool ans = strobogrammatic(s1);
	cout<< ans << endl;
	return 0;
}