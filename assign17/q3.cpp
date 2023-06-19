#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int studandsand(vector<int> students,vector<int> sandwiches){
	queue<int> stud;
    for(int i=0;i<students.size();i++)
        stud.push(students[i]);
    stack<int> sand;
    for(int i=sandwiches.size()-1;i>=0;i--)
        sand.push(sandwiches[i]);
    
    int repeat=0,eaten=0;
    int n = stud.size();
    while(repeat<n && !sand.empty() && !stud.empty()){
        if(stud.front()==sand.top()){
            sand.pop();stud.pop();
            eaten++;repeat=0;
        }else{
            int temp = stud.front();
            stud.pop();
            stud.push(temp);
            repeat++;
        }
    }
    return n-eaten;
}

int main(){
	vector<int> students{1,1,1,0,0,1};
    vector<int> sandwiches{1,0,0,0,1,1};

	cout<<studandsand(students,sandwiches)<<endl;
	return 0;
}