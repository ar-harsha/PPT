#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool find132pattern(vector<int>& nums) {
    int maxi = INT_MIN;
    stack<int> s;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]<maxi) return true;
        while(!s.empty() && nums[i] > s.top())
            maxi = s.top();
            s.pop();
        s.push(nums[i]);
    }
    return false;
}

int main(){
    vector<int> v{10,9,2,5,3,7,101,18};
    cout<<find132pattern(v)<<endl;
    return 0;
}