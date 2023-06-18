#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int water(int arr[],int n){
	int ans = 0;
	stack<int> s;
	for(int i=0;i<n;i++){
		while((!s.empty()) && (arr[s.top()] < arr[i])){
			int pop_height = arr[s.top()];
			s.pop();
			if(s.empty()) break;
			int dist = i-s.top()-1;
			int min_h = min(arr[s.top()],arr[i])-pop_height;
			ans+= dist*min_h;
		}
		s.push(i);
	}
	return ans;
}

int main(){
	int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int ans = water(arr,n);
	cout<<ans<<endl;
	return 0;
}