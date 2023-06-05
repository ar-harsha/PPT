#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool mountain(vector<int> &arr){
	int n = arr.size();
	if(n<3){
		return false;
	}
	int bpi;
	for(bpi=0;bpi<n-1;bpi++){
		if(arr[bpi]>=arr[bpi+1]){
			break;
		}
	}
	int bpi2;
	for(bpi2=n-2;bpi2>=0;bpi2--){
		if(arr[bpi2]<=arr[bpi2+1]){
			break;
		}
	}
	// cout<<bpi<<" "<<bpi2<<endl;
	return (bpi==bpi2+1)?true:false;
}

int main(){
	vector<int> v1{0,2,3,4,5,2,1,1,0};
	bool ans = mountain(v1);
	cout<< ans << endl;
	return 0;
}