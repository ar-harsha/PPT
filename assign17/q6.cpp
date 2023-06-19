#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> cards(vector<int>& deck){
	sort(deck.begin(),deck.end());
    int n = deck.size();
    int i=0;
    queue<int> q;
    while(i<n) q.push(i++);
    vector<int> ans(n,0);
    for(i=0;i<n;i++){
        ans[q.front()] = deck[i];
        q.pop();
        q.push(q.front());
        q.pop();
    }
    return ans;
}

int main(){
	vector<int> v{17,13,11,2,3,5,7};
    vector<int> ans = cards(v);
    for(auto i:ans){
        cout<<i<<" ";
    }
	return 0;
}