#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nextperm(vector<int> &arr){
	int bpi,n = arr.size();
	for(bpi=n-2;bpi>=0;bpi--){
		if(arr[bpi]<arr[bpi+1]){
			break;
		}
	}
	if(bpi<0){
		return reverse(arr.begin(),arr.end());
	}
	else{
		for(int i=n-1;i>=0;i--){
			if(arr[i]>arr[bpi]){
				swap(arr[i],arr[bpi]);
				break;
			}
		}
		reverse(arr.begin()+bpi+1,arr.end());
	}

}

int main(){
	vector<int> v1{1,4,3,2};
	nextperm(v1);
	for(auto i:v1){
		cout<< i<< " ";
	}
	return 0;
}