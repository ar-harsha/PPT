#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matmul(vector<vector<int>> &arr1,vector<vector<int>> &arr2){
	int m1 = arr1.size(),n1 = arr1[0].size();
	int m2 = arr2.size(),n2 = arr2[0].size();
	vector<vector<int>> ans(m1,vector<int> (n2));
	for(int i=0;i<m1;i++){
		for(int j =0;j<n2;j++){	
			ans[i][j]=0;
			for(int k=0;k<n1;k++){
				ans[i][j] += arr1[i][k]*arr2[k][j];
			}
			// ans[i][j]= temp;
		}
	}
	return ans;
}

int main(){
	vector<vector<int>> v1{{1,0,0},{-1,0,3}};
	vector<vector<int>> v2{{7,0,0},{0,0,0},{0,0,1}};

	vector<vector<int>> ans = matmul(v1,v2);
	for(auto arr:ans){
		for(auto i:arr){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}