#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> eliminate(vector<int> &arr,int target){
	vector<int> ans;
	for(int i=0;i<arr.size();i++){
		if(arr[i]!=target){
			ans.push_back(arr[i]);
		}
	}
	return ans;

}

int main(){
	vector<int> v{3,2,2,3};
	vector<int> ans = eliminate(v,3);
	for(auto i : ans){
		cout<< i << " ";
	}
	return 0;
}