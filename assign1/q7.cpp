#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> movezero(vector<int> &arr){
	int k=0,n=arr.size();
	while(k<n){
		if(arr[k]==0){
			break;
		}
		k++;
	}
	int i = k,j=k+1;
	while(i<n && j<n)
	{
		if(arr[j]!=0){
			swap(arr[i],arr[j]);
			i++;
		}
		j++;
	}
	return arr;

}


int main(){
	vector<int> v1{0,1,0,3,12};
	vector<int> ans = movezero(v1);
	for(auto i:ans){
		cout<<i<<" ";
	}
	return 0;
}