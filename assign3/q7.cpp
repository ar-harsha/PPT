#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> range(vector<int> &arr,int l,int u){
	int n = arr.size();
	vector<vector<int>> ans;
	if(l!=arr[0]){
		ans.push_back({l,arr[0]-1});
	}
	for(int i=0;i<n-1;i++){
		if(arr[i]+1 == arr[i+1]){
			continue;
		}
		else{
			vector<int> v{arr[i]+1,arr[i+1]-1};
			ans.push_back(v);
		}
	}
	if(u!=arr[n-1]){
		ans.push_back({arr[n-1]+1,u});
	}
	return ans;
}

int main(){
	vector<int> v1{0,1,3,50,75};
	vector<vector<int>> ans = range(v1,0,99);
	for(auto ele:ans){
		for(auto i:ele){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}