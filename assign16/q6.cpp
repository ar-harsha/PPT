#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void fun(queue<int> &q,int k){
	if(k==0){
		return;
	}
	int x = q.front();
	q.pop();
	fun(q,k-1);
	q.push(x);
}

void reversk(queue<int> q,int k){
	fun(q,k);
	int s = q.size() - k;
    while (s-- > 0) {
        int x = q.front();
        q.pop();
        q.push(x);
    }
    while(!q.empty()){
    	cout<<q.front()<<" ";
    	q.pop();
    }
}

int main(){
	int arr[] = {1,2,3,4,5}; //3,2,1,4,5
	int n = sizeof(arr)/sizeof(arr[0]);
	queue<int> q;
	for(int i=0;i<n;i++){
		q.push(arr[i]);
	}
	reversk(q,3);

	return 0;
}