#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> pairify(vector<int> &arr){
	int n = arr.size()/2;
	vector<int> ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(arr[i]);
        ans.push_back(arr[n+i]);
    }
    return ans;
}

int main(){
	vector<int> v1{2,5,1,3,4,7};
	vector<int> ans = pairify(v1);
	for(auto i:ans){
		cout<<i<<" ";
	}
	return 0;
}