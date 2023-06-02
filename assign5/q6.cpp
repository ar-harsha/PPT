#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> twice(vector<int> &arr){
	vector<int> ans;
	for(int i=0;i<arr.size();i++){
		int temp = abs(arr[i])-1;
		arr[temp] *=-1;
		if(arr[temp]>0){
			ans.push_back(temp+1);
		}
	}
	return ans;

}

int main(){
	vector<int> v1{4,3,2,7,8,2,3,1};
	vector<int> ans = twice(v1);
	for(auto i:ans){
		cout<<i<< " ";
	}
	return 0;
}