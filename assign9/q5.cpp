#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxi(vector<int> &arr,int index,int temp){
	if(index>=arr.size()){
		return temp;
	}
	temp = max(temp,arr[index]);
	return maxi(arr,index+1,temp);
}

int main(){
	vector<int> v1{1,4,3,-5,-4,8,6};
	vector<int> v2{1, 4, 45, 6, 10, -8};

	cout<<maxi(v1,0,INT_MIN)<<endl;
	cout<<maxi(v2,0,INT_MIN)<<endl;

	return 0;
}