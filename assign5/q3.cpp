#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> squaresort(vector<int> &arr){
	vector<int> ans;
	int bp=0;
	while(1){
		if(arr[bp]>=0){
			break;
		}
		bp++;
	}
	int i = bp-1;
	int j = bp;
	while(i>=0 && j<arr.size()){
		if(arr[i]*arr[i] > arr[j]*arr[j]){
			ans.push_back(arr[j]*arr[j]);
			j++;
		}
		else{
			ans.push_back(arr[i]*arr[i]);
			i--;
		}
	}
	while(i>=0){
		ans.push_back(arr[i]*arr[i]);
			i--;
	}
	while(j<arr.size()){
		ans.push_back(arr[j]*arr[j]);
			j++;
	}
	return ans;


}

int main(){
	vector<int> v1{-4,-1,0,3,10};
	vector<int> ans = squaresort(v1);
	for(auto i:ans){
		cout<<i<<" ";
	}
	return 0;
}