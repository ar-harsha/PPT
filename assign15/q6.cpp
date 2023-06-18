#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int solve(string &s){
	stack<int> st;
	for(char i:s){
		if(isdigit(i)){
			st.push(i-'0');
		}
		else{
			int b = st.top();
			st.pop();
			int a = st.top();
			st.pop();
			switch(i){
				case '+':
					st.push(a+b);
					break;
				case '-':
					st.push(a-b);
					break;
				case '*':
					st.push(a*b);
					break;
				case '/':
					st.push(a/b);
					break;
			}
		}
	}
	return st.top();
}

int main(){
	string s = "231*+9-";
	int ans = solve(s);
	cout<<ans<<endl;
	return 0;
}