#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int squareroot(int n){
	int l = 0,r = n-1;
	while(l<r){
		int mid =floor((l+r)/2);
		if(mid*mid > n){
			r=mid-1;
		}
		else if(mid*mid < n){
			l=mid+1;
		}
		else{
			return mid;
		}
	}
	return l;
}

int main(){
	
	cout<<squareroot(4)<<endl;
	cout<<squareroot(8)<<endl;
	
	return 0;
}