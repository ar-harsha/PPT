#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void revers(string &s){
	stack<char> st;
	for(auto i:s){
		st.push(i);
	}
	s.clear();
	while(!st.empty()){
		s+=st.top();
		st.pop();
	}
	return;
	
}

int main(){
	string s = "GeeksforGeeks";
	revers(s);
	cout<<s<<endl;
	return 0;
}