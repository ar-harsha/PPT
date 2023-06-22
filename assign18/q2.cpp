#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sorcolors(vector<int>& arr){
	int i=0,mid=0,j=arr.size()-1;
    while(mid!=j){
        if(arr[mid]==0){
            swap(arr[i],arr[mid]);
            i++;mid++;
        }
        else if(arr[mid]==2){
            swap(arr[j],arr[mid]);
            j--;
        }
        else{
            mid++;
        }
    }
}

int main(){
	vector<int> v{2,0,2,1,1,0};
    sorcolors(v);
    for(auto i:v){
        cout<<i<<" ";
    }
	return 0;
}