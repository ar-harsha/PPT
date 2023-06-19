#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void destroy(vector<string> &arr){
	stack<string> s;
	for(int i=0;i<arr.size();i++){
		if(!s.empty() && s.top()==arr[i]){
			s.pop();
		}else{
			s.push(arr[i]);
		}
	}
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}


int main(){
	vector<string> v{"ab","aa","aa","bcd","ab"};
	stack<string> s;
	for(auto i:v){
		s.push(i);
	}
	destroy(v);
	return 0;
}