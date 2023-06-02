#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &arr){
	for(int i=0;i<arr.size();i++){
		for(int j=i;j<arr[0].size();j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
}

int main(){
	vector<vector<int>> v1{{2,4,-1},{-10,5,11},{18,-7,6}};
	transpose(v1);
	for(auto ele:v1){
		for(auto i:ele){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	// cout<< ans << endl;
	return 0;
}