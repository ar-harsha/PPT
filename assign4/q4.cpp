#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxofmin(vector<int> &arr){
	sort(arr.begin(),arr.end());
	int sum = 0;
	for(int i=0;i<arr.size();i=i+2){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	vector<int> v1{1,4,3,2};
	int ans = maxofmin(v1);
	cout<< ans << endl;
	return 0;
}