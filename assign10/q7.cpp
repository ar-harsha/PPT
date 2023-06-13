#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void perm(string str,int index){
	if(index==str.size()){
		cout<<str<<" ";
		return;
	}
	for(int i=index;i<str.size();i++){
		swap(str[i],str[index]);
		perm(str,index+1);
		swap(str[i],str[index]);
	}
}


int main(){
	perm("abc",0);
	perm("abb",0);
	return 0;
}