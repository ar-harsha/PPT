#include <iostream>
// #include <bits/stdc++.h>
#include <unordered_map>
#include <stack>

using namespace std;

void ngf(int arr[],int n){
	unordered_map<int,int> map;
	for(int i=0;i<n;i++){
		map[arr[i]]++;
	}
	stack<int> s;
	s.push(0);
	int ans[n] =  {0};
	for(int i=1;i<n;i++){
		if(map[arr[s.top()]] > map[arr[i]]){
			s.push(i);
		}
		else{
			while(!s.empty() && map[arr[s.top()]] < map[arr[i]])
				ans[s.top()] = arr[i];
				s.pop();
			s.push(i);
		}
		
	}
	while(!s.empty()){
		ans[s.top()]=-1;
		s.pop();
	}
	 for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

int main(){
	int arr[] = {1, 1, 2, 3, 4, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);

	ngf(arr,n);
	return 0;
}