class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       int n = nums.size();
       sort(nums.begin(), nums.end());

       int prev = 0;
       int current = 1;

       while(current < n){
        if(nums[prev] == nums[current]){
            return true;
        }
        else{
            prev++;
            current++;
        }
       } 
       return false;
    }
};