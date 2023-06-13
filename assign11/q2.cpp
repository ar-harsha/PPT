#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int peak(vector<int> &arr){
	int l = 0,r = arr.size()-1;
	while(l<=r){
		int mid= (l+r)/2;
		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
			return mid;
		}
		else if(arr[mid-1]<arr[mid]<arr[mid+1]){
			l = mid+1;
		}
		else{
			r=mid-1;
		}
	}
	return l;
}

int main(){
	vector<int> v1{1,2,3,1};
	cout<<peak(v1)<<endl;
	vector<int> v2{1,2,1,3,5,6,4};
	cout<<peak(v2)<<endl;
	return 0;
}