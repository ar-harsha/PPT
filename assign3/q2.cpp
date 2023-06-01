#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> foursum(vector<int> &arr,int k){
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	int n = arr.size();
	for(int i=0;i<n;i++){
		if(i>0 && arr[i]==arr[i-1]) continue;
		for(int j=i+1;j<n;j++){
			if(j>i+1 && arr[j]==arr[j-1]) continue;
			int l = j+1,r = n-1;
			while(l<r){
				int sum = arr[i]+arr[j]+arr[l]+arr[r];
				if(sum==k){
					vector<int> v{arr[i],arr[j],arr[l],arr[r]};
					ans.push_back(v);
					while(l<r && arr[l] ==arr[l+1]) l++;
					while(l<r && arr[r] ==arr[r-1]) r++;
					l++,r--;
				}
				else if(sum>k){
					r--;
				}
				else{
					l++;
				}
			}
		}
	}
	return ans;
}

int main(){
	vector<int> v1{1,0,-1,0,-2,2};
	vector<vector<int>> res = foursum(v1,0);
	for(auto ele : res){
		for(auto i:ele){
			cout<< i<< " ";
		}
		cout<<endl;
	}
	return 0;
}