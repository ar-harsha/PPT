#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxcandies(vector<int> &nums,int k){
	int maxi = *max_element(nums.begin(),nums.end());
    int mini = *min_element(nums.begin(),nums.end());
    int ans = (maxi-k)-(mini+k);
    return (ans>0)?ans:0;
}

int main(){
	vector<int> v1{1,5,3,6,8,4,3};
	int ans = maxcandies(v1,2);
	cout<< ans << endl;
	return 0;
}