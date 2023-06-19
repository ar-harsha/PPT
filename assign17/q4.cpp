#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class RecentCounter {
    queue<int> q;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        while(q.front() < t-3000)
            q.pop();
        return q.size();
    }
};

int main(){
	RecentCounter *r = new RecentCounter();
    cout<<r->ping(1)<<endl;
    cout<<r->ping(100)<<endl;
    cout<<r->ping(3001)<<endl;
    cout<<r->ping(3002)<<endl;

	return 0;
}