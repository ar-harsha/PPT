#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int threesum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int close = nums[0]+nums[1]+nums[2];
        for(int i =0;i<n;i++){
            int l = i+1,r = n-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum==target){
                    return sum;
                }
                else if(sum>target){
                    r--;
                }
                else{
                    l++;
                }
                if(abs(sum-target) < abs(close-target)){
                    close = sum;
                }
            }
        }
        return close;
    }

int main(){
	vector<int> v1{-1,2,1,-4};
	int ans = threesum(v1,1);
	cout<< ans << endl;
	return 0;
}