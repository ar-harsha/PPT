#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int consonants(string str,unordered_map<char,int> map,int n){
	if(n==1){
		return (map[str[0]]!=-1)?1:0;
	}
	return consonants(str,map,n-1)+((map[str[n-1]]!=-1)?1:0);

	
}

int main(){
	string str = "geeksforgeeks portal";
	unordered_map<char,int> map;
	map['a']=1;
	map['e']=1;
	map['i']=1;
	map['0']=1;
	map['u']=1;
	map[' ']=1;
	cout<<consonants(str,map,str.size())<<endl;
	return 0;
}