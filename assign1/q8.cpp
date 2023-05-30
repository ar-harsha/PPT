#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> repeatandmiss(vector<int> &arr){
	int n = arr.size();
	int sumn = (n*(n+1))/2;
	int sumsquaren = (n*(n+1)*(2*n+1))/6;
	int sumact = 0;
	int sumsquareact = 0;
	for(int i=0;i<n;i++){
		sumact+=arr[i];
		sumsquareact+=arr[i]*arr[i];
	}
	//miss-repeat = sumn-sumact = x
	//miss+repeat = (sumsquaren-sumsquareact)/x = y
	int x = sumn-sumact;
	int y = sumsquaren-sumsquareact;
	int miss = (x+y)/2;
	int repeat = y-miss;
	return {repeat,miss};

}

int main(){
	vector<int> v1{1,2,2,4};
	vector<int> ans = repeatandmiss(v1);
	cout<< ans[0] <<" "<<ans[1]<<endl;
	return 0;
}