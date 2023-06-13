#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int rotation_min(vector<int> &arr){
	int l = 0,r = arr.size()-1;
	if(arr[l]<=arr[r]) return arr[l];
	int mini = INT_MAX;
	while(l<=r){
		int mid= (l+r)/2;
		if(arr[mid]>=arr[l]){
			mini = min(mini,arr[l]);
			l=mid+1;
		}
		else{
			mini = min(mini,arr[l]);
			r=mid-1;
		}
		
	}
	return mini;
}

int main(){
	vector<int> v1{3,4,5,1,2};
	cout<<rotation_min(v1)<<endl;
	vector<int> v2{4,5,6,7,0,1,2};
	cout<<rotation_min(v2)<<endl;
	return 0;
}