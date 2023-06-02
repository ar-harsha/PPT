#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxcount(int m ,int n,vector<vector<int>> &arr){
	int minrow=m,mincol=n;
	for(int i=0;i<arr.size();i++){
		minrow = min(minrow,arr[i][0]);
		mincol = min(mincol,arr[i][1]);
	}
	return minrow*mincol;
}

int main(){
	vector<vector<int>> v1{{2,2},{3,3}};
	int ans = maxcount(3,3,v1);
	cout<< ans << endl;
	return 0;
}