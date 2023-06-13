#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> &arr){
	int n = arr.size();
	int sum = 0;
	int sumact = (n*(n+1))/2;
	for(auto i:arr){
		sum+=i;
	}
	return sumact-sum;
}

int main(){
	vector<int> v1{9,6,4,2,3,5,7,0,1};
	cout<<missing(v1)<<endl;
	
	return 0;
}