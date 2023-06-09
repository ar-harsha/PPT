#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int n){
	if(n==0 || n==1)
		return n;
	return n+sum(n-1);
}

int main(){
	int x = 15;
	// s1.replace(s1.find("take"),4,"ekat");
	cout<<sum(x)<<endl;
	
	return 0;
}