#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool backspace(string &s1,string &s2){
	int flag;
	int i=s1.size()-1,j=s2.size()-1;
	//back propagate
	while(1){
		//flag is no of characters to ignore
		flag=0;
		//if '#' inc flag 
		//ignore and update flag simulatenously
		while(i>=0 && (flag>0 || s1[i]=='#')){
			flag+=(s1[i]=='#')?1:-1;
			i--;
		}
		flag=0;
		while(j>=0 && (flag>0 || s2[j]=='#')){
			flag+=(s2[j]=='#')?1:-1;
			j--;
		}//when above loops break check the characters if they
		//are matching else it will be false
		if(i>=0 && j>=0 && s1[i]==s2[j]){
			i--;
			j--;
		}else{
			break;
		}
	}
	return i==-1 && j==-1;
}

int main(){
	string s1="ab#c",s2="ad#c";
	bool ans = backspace(s1,s2);
	cout<<ans<<endl;
	return 0;
}