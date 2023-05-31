#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxcandies(vector<int> &arr){
	unordered_map<int,int> map;
	int types = 0;
	for(int i=0;i<arr.size();i++){
		if(map.find(arr[i])==map.end()){
			map[arr[i]]=1;
			types++;
		}
		else{
			map[arr[i]]++;
		}
	}
	return ((arr.size()/2) > types)?types:arr.size()/2;
}

int main(){
	vector<int> v1{1,1,2,2,3,3,3,3};
	int ans = maxcandies(v1);
	cout<< ans << endl;
	return 0;
}