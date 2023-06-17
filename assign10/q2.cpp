#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int eliminate(int n){
	if(n==1) return 1;
	return 2*(1+n/2 - eliminate(n/2));

}

int main(){
	
	int ans = eliminate(n);
	
	return 0;
}
