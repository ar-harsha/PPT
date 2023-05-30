#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &arr1,vector<int> &arr2){
	int n1 = arr1.size();
	int n2 = arr2.size();
	int i = n2-1;
	int j = n2-1;	
	int k = n1-1;
	while(j>=0){
		if(i>=0 && arr1[i] > arr2[j]){
			arr1[k] = arr1[i];
			k--;i--;
		}
		else{
			arr1[k] = arr2[j];
			k--;j--;
		}
	}
	return arr1;
}

int main(){
	vector<int> v1{1,2,3,0,0,0};
	vector<int> v2{2,5,6};
	vector<int> ans = merge(v1,v2);
	for(auto i: v1){
		cout << i << " ";
	}
	return 0;
}