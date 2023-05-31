#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool mono(vector<int> &arr){
	for(int i=0;i<arr.size()-1;i++){
		if(arr[i]>arr[i+1]){
			return false;
		}
	}
	return true;
}

int main(){
	vector<int> v1{1,2,2,3};
	bool ans = mono(v1);
	cout<< ans << endl;
	return 0;
}