#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int* nextgreater(int arr[],int n){
	stack<int> s;
	int* ans = new int[n];
	for(int i=0;i<n;i++){
		//keeping the stack full at all times
		if(s.empty()){
			s.push(arr[i]);
			continue;
		}
		//when stack is not empty
		//and top element is less than cur element
		//its the next gretest ele
		//pop until next greatest encounters
		while(!s.empty() && s.top() < arr[i]){
			cout<<s.top()<<"-->"<<arr[i]<<endl;
			s.pop();
		}
		//after comparing with stack ele
		//push to stack for further comparision
		s.push(arr[i]);
	}
	//remaining are peaks
	while(!s.empty()){
		cout<<s.top()<<"-->"<<-1<<endl;
		s.pop();
	}

	return ans;
}

int main(){
	int arr[] = {6,1,2,8,1,0,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int *ans = nextgreater(arr,n);
	// for(int i=0;i<n;i++){
	// 	cout<<ans[i]<<" ";
	// }
	return 0;
}