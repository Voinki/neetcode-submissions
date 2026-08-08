class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> timeRepeat;

        for (int i = 0; i < nums.size(); i++){
            
            if (!timeRepeat.contains(nums[i]))
                timeRepeat.insert(nums[i]);
            else
                return true;
        }
        
        return false;
    }
};