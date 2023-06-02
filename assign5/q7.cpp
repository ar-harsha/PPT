#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int rotation(vector<int> &arr){
	int l=0,r=arr.size()-1;
	
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]<=arr[mid-1] && arr[mid]<=arr[mid+1])
			return mid;
		else if(arr[mid]<=arr[r])
			r = mid-1;
		else
			l=mid+1;
	}
	return l;
}

int main(){
	vector<int> v1{3,4,5,1,2};
	int ans = rotation(v1);
	cout<< ans << endl;
	return 0;
}