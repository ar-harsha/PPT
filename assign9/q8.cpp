#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int product(int n){
	if(n==0 || n==1)
		return n;
	return n*product(n-1);
}

int main(){
	int x = 5;
	// s1.replace(s1.find("take"),4,"ekat");
	cout<<product(x)<<endl;
	
	return 0;
}