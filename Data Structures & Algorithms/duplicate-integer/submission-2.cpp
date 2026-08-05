class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return false;
        sort(nums.begin(), nums.end());

        int prev = 0;
        int curr = 1;

        while(curr < n){
            if(nums[prev] == nums[curr]){
                return true;
            }
            else{
                prev++;
                curr++;
            }
        }
        return false;
    }
};