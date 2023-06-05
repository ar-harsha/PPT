#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> &arr){
	int m = arr.size(),n = arr[0].size();
	int left=0,right = n-1;
	int up = 0,down = m-1;
	vector<int> ans;
	while(left<=right && up<=down){
		for(int i=left;i<=right;i++){
			ans.push_back(arr[up][i]);
		}
		up++;
		for(int i=up;i<=down;i++){
			ans.push_back(arr[i][right]);
		}
		right--;
		if(up<=down){
			for(int i=right;i>=left;i--){
				ans.push_back(arr[down][i]);
			}
			down--;
		}
		if(left<=right){
			for(int i=down;i>=up;i--){
				ans.push_back(arr[i][left]);
			}
			left++;
		}
	}
	return ans;
}

int main(){
	vector<vector<int>> v1{{1,2,3},{8,9,4},{7,6,5}};
	vector<int> ans = spiral(v1);
	for(auto i:ans){
		cout<<i<<" ";
	}
	return 0;
}