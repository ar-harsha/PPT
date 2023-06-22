#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int findMinArrowShots(vector<vector<int>>& points) {
    sort(points.begin(),points.end());
    int ans = 1;int last = INT_MAX;
    for(int i=0;i<points.size();i++){
        if(points[i][0] > last){
            ans++;
            last = points[i][1];
        }
        last = min(points[i][1],last);
    }
    return ans;
}

int main(){
	vector<vector<int>> v{{10,16},{2,8},{1,6},{7,12}};
    cout<<findMinArrowShots(v)<<endl;
	return 0;
}