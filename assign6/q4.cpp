#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxbinary(vector<int> &arr){
	unordered_map<int,int> map;
	map[0]=-1;
	int ans=0,count=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==0) count--;
		else count++;
		if(map.find(count)!=map.end()){
			ans=max(ans,i-map[count]);
		}
		else{
			map[count]=i;
		}
	}
	return ans;
}

int main(){
	vector<int> v1{1,0,1,1,0,0,1,1,1,1,1,0};
	int ans = maxbinary(v1);
	cout<< ans << endl;
	return 0;
}