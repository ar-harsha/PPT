#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minprod(vector<int> &arr1,vector<int> &arr2){
	if(arr1.size()!=arr2.size()) return -1;
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end(),greater<int>());
	int prod = 0;
	for(int i=0;i<arr1.size();i++){
		prod+=(arr1[i]*arr2[i]);
	}
	return prod;
}

int main(){
	vector<int> v1{5,3,4,2};
	vector<int> v2{4,2,2,5};
	int ans = minprod(v1,v2);
	cout<< ans << endl;
	return 0;
}