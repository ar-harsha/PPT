#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> &arr,int target){
	unordered_map<int,int> map;
	int n = arr.size();
	for(int i=0;i<n;i++){
		if(map.find(target-arr[i])==map.end()){
			map[arr[i]] = i;
		}
		else{
			return {map[target-arr[i]],i};
		}
	}
	return {-1,-1};

}

int main(){
	vector<int> v{2,7,11,15};
	vector<int> ans = twosum(v,9);
	cout<< ans[0] << " "<< ans[1] << endl;
	return 0;
}