#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int unique(vector<int> &arr){
	int sum = 0;
	for(int i=0;i<arr.size();i++){
		sum=sum^arr[i];
	}
	return sum;
}

int main(){
	vector<int> v1{1,1,2,3,3};
	int ans = unique(v1);
	cout<< ans << endl;
	return 0;
}