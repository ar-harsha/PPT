#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class MinStack{
	vector<int> v;
public:
	MinStack(){
		v = {};
	}
	void push(int val){
		v.push_back(val);
	}

	void pop(){
		v.erase(v.end()-1);
	}
	int top(){
		return v.back();
	}
	int getMin(){
		return *min_element(v.begin(),v.end());
	}
};

int main(){
	MinStack s;
	s.push(-2);
	s.push(0);
	s.push(-3);
	cout<<s.getMin()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	cout<<s.getMin()<<endl;

	return 0;
}