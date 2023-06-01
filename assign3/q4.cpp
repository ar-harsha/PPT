#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> &arr,int target){
	int l = 0,r = arr.size()-1;
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

int main(){

	vector<int> v1 = {1,3,5,6};
	int ans = bs(v1,5);
	cout<< ans << endl;
	return 0;
}