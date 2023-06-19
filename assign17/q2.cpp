#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int maxsum(vector<int> &arr){
    int cur=arr[0],maxsum=arr[0];
    for(int i=1;i<arr.size();i++){
        if(cur<0){
            cur=0;
        }
        cur += arr[i];

    }
    return maxsum;
}

int maxcircular(vector<int> &arr){
	int noncircular = maxsum(arr);
    int total = 0;
    for(int i=0;i<arr.size();i++){
        total+=arr[i];
        arr[i] = -arr[i];
    }
    int minsum = maxsum(arr);
    int newmax = minsum+total;
    if(newmax==0) return noncircular;
    return max(noncircular,newmax);

}



int main(){
	vector<int> v{8, 9, -9, -10, -11, 12};
	cout<<maxcircular(v)<<endl;
	return 0;
}