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

vector<int> intersection(vector<int> &arr1,vector<int> &arr2,vector<int> &arr3){
	int n1 = arr1.size(),n2 = arr2.size(),n3 = arr3.size();
	vector<int> ans;
	for(int i=0;i<n1;i++){
		if(i!=0 && arr1[i]==arr1[i-1]){
			continue;
		}
		if(bs(arr2,n2,arr1[i]) && bs(arr3,n3,arr1[i])){
			ans.push_back(arr1[i]);
		}
	}
	return ans;
}

int main(){
	vector<int> v1{1,2,3,4,5};
	vector<int> v2{1,2,5,7,9};
	vector<int> v3{1,3,4,5,8};

	vector<int> ans = intersection(v1,v2,v3);
	for(auto i:ans){
		cout<<i<<" ";
	}
	return 0;
}