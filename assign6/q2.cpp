#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool bs(vector<vector<int>> &arr,int target){
        int m = arr.size();
        int n = arr[0].size();
        int l=0,r = m*n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid/n][mid%n]==target){
                return true;
            }
            else if(arr[mid/n][mid%n]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return false;

}
        
int main(){
	vector<vector<int>> v1={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
	bool ans = bs(v1,3);
	
    cout<<ans<<" ";
    
	return 0;
}