class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n>0){
        for(int i=0;i<n;i++){
            ans *= x;
        }}else if(n<0){
            for(int i=0;i<-n;i++){
                ans *= x;
            }
            ans= Math.abs(1/ans);
        }else{
            ans=0;
        }
        return ans;
    }
};