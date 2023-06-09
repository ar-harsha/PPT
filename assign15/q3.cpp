#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Stack{
	queue<int> q1,q2;
public:
	void push(int x){
		q2.push(x);
		while(!q1.empty()){
			q2.push(q1.front());
			q1.pop();
		}
		swap(q1,q2);
	}
	void pop(){
		if(q1.empty())
			return;
		q1.pop();
	}
	int top(){
		if(q1.empty())
			return -1;
		return q1.front();
	}
	
};

int main(){
	Stack s;
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.pop();
	
	while(s.top()!=-1){
		cout<<s.top()<<" ";
		s.pop();
	}

	return 0;
}