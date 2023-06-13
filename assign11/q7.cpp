#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<int> range(vector<int> arr,int target){
	vector<int> ans{-1,-1};
	if(arr.size()==0) return ans;
	int l=0,r=arr.size()-1;
	while(l<r){
		int mid=(l+r)/2;
		if(arr[mid]==target){
			ans[0] = mid;
			ans[1] = mid;
			while(ans[0]-1 >=0 && arr[ans[0]-1]==target) ans[0]--;
			while(ans[1]<arr.size() && arr[ans[1]+1]==target) ans[1]++;
			return ans;
		}
		else if(arr[mid]>target){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return ans;
	
}

int main(){
	vector<int> v1{5,7,7,8,8,10};
	vector<int> ans = range(v1,8);
	cout<<ans[0]<<" "<<ans[1]<<endl;

	vector<int> ans1 = range(v1,6);
	cout<<ans1[0]<<" "<<ans1[1]<<endl;

	vector<int> ans2 = range({},0);
	cout<<ans2[0]<<" "<<ans2[1]<<endl;
	return 0;
}