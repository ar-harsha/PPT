#include <iostream>
#include <bits/stdc++.h>
#include <deque>
using namespace std;

void increment(vector<int> &arr){
	string s = "";
	for(int i:arr){
		s+=to_string(i);
	}
	int n = stoi(s)+1;
	deque<int> q;
	while(n){
		q.push_front(n%10);
		n = n/10;
	}
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop_front();
	}

}

int main(){
	vector<int> v{9,9,9};
	increment(v);
	
	return 0;
}