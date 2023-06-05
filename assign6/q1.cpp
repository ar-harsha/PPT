#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> perm(string s) {
        int n = s.size();
        vector<int> ans;
        int l=0,r=n;
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                ans.push_back(l++);
            }
            else{
                ans.push_back(r--);
            }
        }
        ans.push_back(l);
        return ans;
    }

int main(){
	string s="IDID";
	vector<int> ans = perm(s);
	for(auto i:ans){
        cout<<i<<" ";
    }
	return 0;
}