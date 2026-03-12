class Solution {
public:
    bool judgeSquareSum(int c) {
        long long x=0;
        long long y=sqrt(c);
        
        long long p=c;
        while(x<=y){
            long long z=x*x+y*y;
            if(z==p) return true;
            else if(z<c) x++;
            else y--;
            

        }
        return false;
        

    }
};