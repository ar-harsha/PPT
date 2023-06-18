#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insert_bottom(stack<int> &s,int x){
	if(s.size() == 0){
		s.push(x);
	}
	else{
		int a = s.top();
		s.pop();
		insert_bottom(s,x);
		s.push(a);
	}
	
}

void reversed(stack<int> &s){
	if(s.size() > 0){
		int x = s.top();
		s.pop();
		reversed(s);
		insert_bottom(s,x);
	}
	return;
	
}

int main(){
	stack<int> s;
	vector<int> arr{3,2,1,7,6};
	for(int i=arr.size()-1;i>=0;i--){
		s.push(arr[i]);
	}
	
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}

	reversed(s);

	cout<<s.empty()<<endl;
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}