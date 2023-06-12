#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int n){
	if(n==0)
		return false;
	return (n%3==0)?true:false;
}

int main(){
	cout<<power(27)<<endl;
	return 0;
}