#include <iostream>
#include <bits/stdc++.h>

using namespace std;



bool possible(queue<int> &q,int n){
	stack<int> s;
	int expected = 1;
	int temp;
	while(!q.empty()){
		temp = q.front();
		q.pop();
		if(temp==expected){
			expected++;
		}
		else{
			if(s.empty()){
				s.push(temp);
			}
			else if(!s.empty() && s.top() < temp){
				return false;
			}
			else{
				s.push(temp);
			}
		}
	}
	while(!s.empty() && s.top() == expected){
		s.pop();
		expected++;
	}
	if(expected-1==n && s.empty()){
		return true;
	}
	return false;
}

int main(){
	int arr[] = { 5, 1, 2, 3, 4 };
	int n = sizeof(arr)/sizeof(arr[0]);
	queue<int> q;
	for(int i=0;i<n;i++){
		q.push(arr[i]);
	}
	cout<<possible(q,q.size())<<endl;

	return 0;
}