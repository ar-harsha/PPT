#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> &arr,int l,int r,int target){
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]>target){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return -1;
}

vector<int> original(vector<int> &arr){
	vector<int> ans;
	sort(arr.begin(),arr.end());
	vector<bool> vis(arr.size(),false);
	for(int i=0;i<arr.size();i++){
		int index=-1;
		if(vis[i]==false)
			index = bs(arr,i+1,arr.size()-1,2*arr[i]);
		if(index!=-1){
			vis[i]=true;
			vis[index]=true;
			ans.push_back(arr[i]);
		}
	}
	return ans;
}

int main(){
	vector<int> v1{1,3,4,2,6,8};
	vector<int> ans = original(v1);
	for(auto i:ans){
		cout<<i<<" ";
	}
	return 0;
}