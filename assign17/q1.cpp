#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int nonrepeating(string s){
	unordered_map<int,int> map;
    for(int i=0;i<s.size();i++){
        map[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++) {
        if (map[s[i]] == 1) return i;
    }
    return -1;
}

int main(){
	string s = "leetcode";
	cout<<nonrepeating(s)<<endl;
	return 0;
}