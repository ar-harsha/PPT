#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int game(int n,int k){
	queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    int count=0;
    while(q.size()!=1){
        count++;
        if(count==k){
            q.pop();
            count=0;
            continue;
        }
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    return q.front();
}

int main(){
	cout<<game(5,2)<<endl;
    cout<<game(6,5)<<endl;

	return 0;
}