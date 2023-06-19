#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void fun(stack<int> &s,int n){
	if(s.size()-1==n){
		s.pop();
		return;
	}
	int t = s.top();
	s.pop();
	fun(s,n);
	s.push(t);
}

void deletemid(stack<int> &s){
	int n = s.size();
	fun(s,n/2);
	stack<int> temp = s;
	for(;!temp.empty();temp.pop()){
		cout<<temp.top()<<" ";
	}
	
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	stack<int> s;
	for(int i=0;i<n;i++){
		s.push(arr[i]);
	}
	deletemid(s);

	return 0;
}