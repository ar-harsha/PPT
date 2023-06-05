#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void revk(string &s1,int k){
	int count=-1,start=0;
	for(int i=0;i<s1.size();i++){
		count++;
		if(count==0){
			reverse(s1.begin()+start,s1.begin()+start+k);
		}
		if(count==2*k){
			count=-1;
			start = i;
		}
	}

}

int main(){
	string s1="abcdefg";
	revk(s1,2);
	// s1.replace(s1.find("take"),4,"ekat");
	cout<<s1<<endl;
	
	return 0;
}