#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dto2d(vector<int> &arr,int m,int n){
	vector<vector<int>> ans;
	vector<int> row;
	for(int i=0;i<m*n;i++){
		row.push_back(arr[i]);
		if(row.size()==n){
			ans.push_back(row);
			row.clear();
		}
	}
	return ans;
}

int main(){
	vector<int> v1{1,4,3,2};
	vector<vector<int>> ans = dto2d(v1,2,2);
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}