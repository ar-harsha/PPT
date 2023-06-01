#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool meeting(vector<vector<int>> &arr){
	sort(arr.begin(),arr.end());
	for(int i =0;i<arr.size()-1;i++){
		if(arr[i][1] > arr[i+1][0]){
			return false;
		}
	}
	return true;
}

int main(){
	vector<vector<int>> v1{{0,30},{5,10},{15,20}};
	bool ans = meeting(v1);
	cout<< ans << endl;
	return 0;
}