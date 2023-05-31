#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int noadjacent(vector<int> &arr,int n){
	int f =0;
	for(int i=1;i<arr.size()-1;i++){
		if(arr[i]==0){
			if(arr[i-1]==0 && arr[i+1]==0){
				f++;
			}
		}
	}
	return (n<=f)?true:false;
}

int main(){
	vector<int> v1{1,0,0,0,1};
	int ans = noadjacent(v1,1);
	cout<< ans << endl;
	return 0;
}