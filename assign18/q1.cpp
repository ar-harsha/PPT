#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> intervals(vector<vector<int>> &arr){
	vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(ans.empty() || ans.back()[1]<arr[i][0]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1] = max(ans.back()[1],arr[i][1]);
        }
    }
    return ans;
}

int main(){
	vector<vector<int>> v{{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = intervals(v);
    for(auto i:ans){
        cout<<i[0]<<" "<<i[1]<<" ";
        cout<<endl;
    }
	return 0;
}