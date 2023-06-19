#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void smallerdiff(int arr[],int n){
	stack<int> s,s1;
	vector<int> ans1,ans2(n,0);
	//right smaller
	for(int i=0;i<n;i++){
		while(!s1.empty() && arr[s1.top()]>arr[i]){
			ans2[s1.top()]=arr[i];
			s1.pop();
		}
		s1.push(i);
	}
	//left smaller
	for(int i=0;i<n;i++){
		while(!s.empty() && s.top()>=arr[i]){
			s.pop();
		}
		if(s.empty()){
			ans1.push_back(0);
		}
		else{
			ans1.push_back(s.top());
		}
		s.push(arr[i]);
	}
	for(auto i:ans1){
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:ans2){
		cout<<i<<" ";
	}
	cout<<endl;
	int maxi = INT_MIN;
	for(int i=0;i<n;i++){
		maxi = max(abs(ans1[i]-ans2[i]),maxi);
	}
	cout<<maxi<<endl;

}

int main(){
	int arr[] = {2, 4, 8, 7, 7, 9, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	smallerdiff(arr,n);
	return 0;
}