#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sortstack(stack<int> s){
	stack<int> temp;
	while(!s.empty()){
		int temp_int = s.top();
		s.pop();
		while(!temp.empty() && temp.top()<temp_int){
			s.push(temp.top());
			temp.pop();
		}
		temp.push(temp_int);
	}
	for(;!temp.empty();temp.pop()){
		cout<<temp.top()<<" ";
	}
	
}

int main(){
	int arr[] = {34, 3, 31, 98, 92, 23};
	int n = sizeof(arr)/sizeof(arr[0]);
	stack<int> s;
	for(int i=0;i<n;i++){
		s.push(arr[i]);
	}
	sortstack(s);
	return 0;
}