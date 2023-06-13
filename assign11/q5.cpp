#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &arr1,vector<int> &arr2){
	unordered_set<int> s(arr1.begin(),arr1.end());
	vector<int> ans;
	for(auto i:arr2){
		if(s.find(i)!=s.end()){
			ans.push_back(i);
			s.erase(i);
		}
	}
	return ans;
}

int main(){
	vector<int> v1{4,9,5};
	vector<int> v2{9,4,9,8,4};
	vector<int> ans = intersection(v1,v2);
	for(auto i:ans){
		cout<<i<<" ";
	}
	return 0;
}