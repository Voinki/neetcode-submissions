class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       set<int> setNums;

       for (int i=0; i < nums.size(); i++){
        if (!setNums.contains(nums[i]))
            setNums.insert(nums[i]);
        else return true;
        
       }

       return false;
    }
};