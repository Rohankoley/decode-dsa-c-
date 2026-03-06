class Solution {
public:
    int mySqrt(int x) {
        long long l=0;
        long long h=x;
        int m= l+ (h-l)/2;
        while(l<=h){
            m= l+ (h-l)/2;
            long long m1=m;
            long long x1=x;
            if(m1*m1==x1) return m;
            else if(m1*m1<x1){
                l=m+1; 

            } 
            else if(m1*m1>x1) h=m-1;

        }
        return h;
    }
};