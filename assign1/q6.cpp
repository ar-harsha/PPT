#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool repeat(vector<int> &arr){
	unordered_map<int,int> map;
	for(int i=0;i<arr.size();i++){
		if(map.find(arr[i])==map.end()){
			map[arr[i]]++;
		}
		else{
			return false;
		}
	}
	return true;
}

int main(){
	vector<int> v1{1,2,3,1};
	cout << repeat(v1) << endl;
	return 0;
}