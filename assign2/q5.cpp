#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxpro(vector<int> &arr){
	int prod1 = 1,prod2 =1;
	int ans = INT_MIN;
	for(int i=0;i<arr.size();i++){
		int temp = max({arr[i],prod1*arr[i],prod2*arr[i]});
		prod2 = min({arr[i],prod1*arr[i],prod2*arr[i]});
		prod1 = temp;
		ans = max(ans,prod1);
	}
	return ans;
}

int main(){
	// vector<int> v1{1,2,3};
	vector<int> v1 = {1,2,-3,0,-4,-5};
	int ans = maxpro(v1);
	cout<< ans << endl;
	return 0;
}