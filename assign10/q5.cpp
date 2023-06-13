#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int substring(string &str){
	int ans=0;
    vector<int> vis(26,0);
    for(int i=0;i<str.size();i++){
        vis[str[i]-'a']++;
    }
    for(int i=0;i<str.size();i++){
        ans+=(vis[i]*(vis[i]+1)/2);
    }
    return ans;
}

int main(){
	string str = "abcab";
	cout<<substring(str)<<endl;
	return 0;
}