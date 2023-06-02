#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int distance(vector<int> &arr1,vector<int> &arr2,int d){
	int count=0;
	for(int i=0;i<arr1.size();i++){
		for(int j=0;j<arr2.size();j++){
			if(abs(arr1[i]-arr2[j]) <= d && arr1[i]!=arr2[j]){
				count++;
			}
		}
	}
	return count;
}

int main(){
	vector<int> v1{4,5,8};
	vector<int> v2{10,9,1,8};

	int ans = distance(v1,v2,2);
	cout<< ans << endl;
	return 0;
}