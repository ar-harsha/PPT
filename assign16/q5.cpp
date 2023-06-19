#include <iostream>
#include <bits/stdc++.h>

using namespace std;

stack<int> fun(int n,stack<int> &s){
	if(n!=0){
		int x = n%10;
		s = fun(n/10,s);
		s.push(x);
	}
	return s;
}

void reverstack(int n){
	stack<int> s;
	s = fun(n,s);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

int main(){
	
	reverstack(365);
	reverstack(1234);
	// cout<<(123%100)<<endl;
	return 0;
}