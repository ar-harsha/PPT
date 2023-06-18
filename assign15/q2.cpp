#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void nearestsmall(int arr[],int n){
	stack<int> s;
	vector<int> ans;

	for(int i=0;i<n;i++){
		while(!s.empty() && s.top() >= arr[i]){
			s.pop();
		}
		if(s.empty()){
			ans.push_back(-1);
		}
		else{
			ans.push_back(s.top());
		}
		s.push(arr[i]);
	}
	for(auto i:ans){
		cout<<i<<" ";
	}
}

int main(){
	int arr[] = {6,1,2,8,1,0,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	nearestsmall(arr,n);
	return 0;
}