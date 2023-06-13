#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int repeat(vector<int> &arr){
	int n = arr.size();
	int sum = 0,sumsquare =0;
	int sumact = (n*(n+1))/2;
	int sumsquareact = (n*(2*n+1)*(n+1))/6;
	for(auto i:arr){
		sum+=i;
		sumsquare += i*i;
	}
	int diff = -sumact+sum; // -missing + repeating
	int diff2 = -sumsquareact+sumsquare; //-missing^2 + repat^2
	int summation = diff2/diff;
	return (summation+diff)/2;
}


int main(){
	vector<int> v1{1,3,4,2,2};
	cout<<repeat(v1)<<endl;
	
	return 0;
}