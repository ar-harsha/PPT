#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxgap(vector<int>& arr){
    if(arr.size()<2){
            return 0;
    }
	sort(arr.begin(),arr.end());
    int diff = INT_MIN;
    for(int i=0;i<arr.size()-1;i++){
        diff = max(arr[i+1]-arr[i],diff);
    }
    return diff;
}

int main(){
	vector<int> v{3,6,9,1};
    cout<<maxgap(v)<<endl;
	return 0;
}