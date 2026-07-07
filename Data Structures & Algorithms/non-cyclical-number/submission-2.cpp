class Solution {
public:
    bool isHappy(int n) {
        int t = n;
        int sum = 0;
        while(1){
            if( (sum == 20 || sum == 4 || sum == 2) && t == 0){
                return false;
            }
            else if(sum == 1 && t == 0){
                return true;
            }

            if(t == 0){
                t = sum;
                sum = 0;
                continue;
            }
            sum += (t%10)*(t%10);
            t /= 10;
        }
        //return true;
    }
};
