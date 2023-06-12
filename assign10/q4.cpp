#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int size(string str){
	if(str.empty()){
		return 0;
	}
	str.pop_back();
	return 1+size(str);
}

int main(){
	cout<<size("abcd")<<endl;
	cout<<size("arivetirangaharshavardhan")<<endl;

	return 0;
}