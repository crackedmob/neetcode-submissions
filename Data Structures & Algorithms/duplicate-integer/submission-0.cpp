class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int left = 0, right = 1;
        //count = 0;

        while(left < n && right < n){
            if(nums[left] == nums[right]){
                return true;
            }
            else{
                left++;
                right++;
            }
        }
        return false;
    }
};