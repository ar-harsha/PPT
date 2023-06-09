#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int progression(int a,int d,int n,int temp,int index){
	if(index>=n)
		return temp;
	temp = a+ d*index;
	return progression(a,d,n,temp,index+1);
}

int main(){
	cout<<progression(2,1,5,0,0)<<endl;
	cout<<progression(5,2,10,0,0)<<endl;

	return 0;
}