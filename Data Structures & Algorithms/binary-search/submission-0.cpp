class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        sort(nums.begin(), nums.end());
        while(l <= r){
            int m = (l+r) / 2;
            if(nums[m] == target) return m;
            else if(nums[m] < target) l = m+1;
            else r = m - 1; 
        }

        return -1;
    }
};


//1 2 3 4 5 6 7 8
//- - - - - - - - 
