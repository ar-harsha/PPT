#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check_line(vector<vector<int>> &arr){
	int slope = (arr[1][1]-arr[0][1])/(arr[1][0]-arr[0][0]);
	for(int i=1;i<arr.size()-1;i++){
		int check = (arr[i+1][1]-arr[i][1])/(arr[i+1][0]-arr[i][0]);
		if(slope!=check) return false;
	}
	return true;
}

int main(){
	vector<vector<int>> v1{{1,2},{2,3},{3,4},{4,5},{6,7},{8,9}};
	bool ans = check_line(v1);
	cout<<ans<<" ";
	return 0;
}