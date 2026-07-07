class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        long long x = 1;
        x *= digits[0];
        cout << x << endl;
        for(int i = 1;i<digits.size();i++){
            x *= 10;
            x += digits[i];
        }
        cout << x << endl;
        x++;
        cout << x << endl;
        while(x != 0){
            int d = x%10;
            ans.push_back(d);
            x /= 10;
        }

        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
