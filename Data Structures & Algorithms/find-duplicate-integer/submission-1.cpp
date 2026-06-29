class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int ans;
        for(auto u : mp){
            if(u.second > 1){
                ans = u.first;
                return ans;
            }
        }
    }
};
