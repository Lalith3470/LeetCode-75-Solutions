class Solution {
public:
    int firstBadVersion(int n) {
        double i=1;
        while(i<n){
            double m=(i+n)/2;
            if (isBadVersion(m)==true) n=m;
            else i=m+1;
        }
        return i;
    }
};
