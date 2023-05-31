#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int harmony(vector<int> &arr){
	unordered_map<int,int> map;
	for(int i=0;i<arr.size();i++){
		map[arr[i]]++;
	}
	int maxi = INT_MIN;
	for(int i=0;i<arr.size();i++){
		int curmax = max(map[arr[i]]+map[arr[i]+1],map[arr[i]]+map[arr[i]-1]);
		maxi = max(curmax,maxi);
	}
	return maxi;
}

int main(){
	vector<int> v1{1,3,2,2,5,2,3,7};
	int ans = harmony(v1);
	cout<< ans << endl;
	return 0;
}