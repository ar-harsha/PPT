#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int n,int p){
	if(p==0)
		return 1;
	if(p==1)
		return n;
	int temp = power(n,p/2);
	return (p%2==0)?temp*temp:n*temp*temp;
}

int main(){
	cout<<power(2,5)<<endl;
	return 0;
}