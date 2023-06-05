#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rev(string &s1){
	int start = 0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]==' '){
			reverse(s1.begin()+start,s1.begin()+i);
			start=i+1;
		}
	}
	reverse(s1.begin()+start,s1.end());
}

int main(){
	string s1="Let's take LeetCode contest";
	rev(s1);
	// s1.replace(s1.find("take"),4,"ekat");
	cout<<s1<<endl;
	
	return 0;
}