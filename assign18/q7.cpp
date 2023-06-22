#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i] > ans.back()){
                ans.push_back(nums[i]);
            }
            else{
            
                int low = lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                // cout<<low<<" ";
                ans[low] = nums[i];
            }
        }
        // for(auto i:ans){
        //     cout<<i<<" ";
        // }
        return ans.size();
    }

int main(){
    vector<int> v{10,9,2,5,3,7,101,18};
    cout<<lengthOfLIS(v)<<endl;
    return 0;
}