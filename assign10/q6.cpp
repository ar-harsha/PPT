#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int hanoi(int n,char first,char target,char buffer,int count){
	if(n==1){
		count++;
		cout<<"Moving disk "<<n<<" from rod " << first<< " to rod " << target<<endl;
	}else{
		count = hanoi(n-1,first,buffer,target,count); //moving to second rod
		count = hanoi(1,first,target,buffer,count);
		count = hanoi(n-1,buffer,target,first,count); //here first becomes buffer
	}
	return count;
	
}

int main(){
	//1 is first rod
	//2 is buffer rod
	//3 is target rod
	cout<<hanoi(3,'1','3','2',0)<<endl;
	return 0;
}