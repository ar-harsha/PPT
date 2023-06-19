#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class DataStream {
public:
    int val = 0,kmax =0;
    int valcount = 0; 
    DataStream(int value, int k) {
        val = value;
        kmax = k;
    }
    
    bool consec(int num) {
        if(num==val){
            valcount++;
        }
        else{
            valcount = 0;
        }
        return valcount >= kmax;
    }
};


int main(){
	DataStream d(4,3);
    cout<<d.consec(4)<<endl;
    cout<<d.consec(4)<<endl;
    cout<<d.consec(4)<<endl;
    cout<<d.consec(3)<<endl;


    
	return 0;

}