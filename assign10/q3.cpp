#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void subsets(string &s,int index,string temp){
	if(s.size()==index)
		cout<<temp<<" ";
		ans.push_back(temp);
		return; 
	subsets(s,index+1,temp+s[index]);
	subsets(s,index+1,temp);
}

vector<string> fun(string &s){
	string temp = "";
	subsets(s,0,temp);
	for(string str:ans)
		cout<<str<<" ";
	return ans;
}


int main(){
	string s = "ABC";
	vector<string> res = fun(s);
	for(string str:res)
		cout<<str<<" ";
	return 0;
}