#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool bs(vector<int> &arr,int n,int target){
	int l = 0,r = n-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]==target){
			return true;
		}
		else if(arr[mid]>target){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return false;
}

vector<vector<int>> aminusb(vector<int> &arr1,vector<int> &arr2){
	vector<vector<int>> ans{{},{}};
	int n1 = arr1.size(),n2 = arr2.size();
	for(int i=0;i<n1;i++){
		if(!bs(arr2,n2,arr1[i])){
			ans[0].push_back(arr1[i]);
		}
	}
	for(int i=0;i<n2;i++){
		if(!bs(arr1,n1,arr2[i])){
			ans[1].push_back(arr2[i]);
		}
	}
	return ans;
}

int main(){
	vector<int> v1{1,2,3};
	vector<int> v2{2,4,6};

	vector<vector<int>> ans = aminusb(v1,v2);
	for(auto i:ans[0]){
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:ans[1]){
		cout<<i<<" ";
	}
	return 0;
}