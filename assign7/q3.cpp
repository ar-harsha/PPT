#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string add(string &s1,string &s2){
	int n1 = stoi(s1);
	int n2 = stoi(s2);
	return to_string(n1+n2);
}

string fun(string &s1,string &s2,int i,int j,int &c,string &ans){
	if(c==0 && i<0 && j<0){
		reverse(ans.begin(),ans.end());
		return ans;
	}
	if(i>=0){
		c+=s1[i]-'0';
		i--;
	}
	if(j>=0){
		c+=s2[j]-'0';
		j--;
	}
	ans+=char(c%10+'0');
	c=c/10;
	return fun(s1,s2,i,j,c,ans);
}
string addstring(string &s1,string &s2){
	int i = s1.size(),j = s2.size();
	string ans = "";
	int carry=0;
	return fun(s1,s2,i-1,j-1,carry,ans);
}


int main(){
	string s1="11",s2="123";
	string ans = addstring(s1,s2);
	cout<< ans << endl;
	return 0;
}