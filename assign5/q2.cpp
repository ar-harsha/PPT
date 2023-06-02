#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int stairs(int n){
	int i = 1,coins;
    while(1){
        coins = (i*(i+1))/2;
        if(n-coins < 0){
            break;
        }
        i++;
    }
    return i-1;
}

int main(){
	// vector<int> v1{1,4,3,2};
	int ans = stairs(4);
	cout<<ans<<endl;

	return 0;
}