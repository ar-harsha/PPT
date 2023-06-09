// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0,r=n;
        while(r-l>1){
            int mid = (l+r)/2;
            if(isBadVersion(mid)) r = mid;
            else l=mid;
        }
        return r;
    }
};