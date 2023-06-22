#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool duplicate(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        arr[arr[i]%n] += n;
    }
    for(int i=0;i<n;i++){
        if(arr[i]/n > 1){
            return true;
        }
    }
    return false;
}

int main(){
	vector<int> v{1,1,1,3,3,4,3,2,4,2};
    cout<<duplicate(v)<<endl;
	return 0;
}