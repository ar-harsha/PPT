#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void perm(string &s,int index){
	if(s.size()==index)
		cout<<s<<" ";
	for(int i=index;i<s.size();i++){
		swap(s[index],s[i]);
		perm(s,index+1);
		swap(s[index],s[i]);
	}

}

int main(){
	string s = "ABC";
	perm(s,0);
	return 0;
}