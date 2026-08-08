class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> maps;
        int complement = 0;

        for (int i=0; i< nums.size();i++){
           maps.insert({nums[i], i});

            complement = target - nums[i];

            if (maps.count(complement) && maps[complement] != i)
            return {maps[complement], i};
        }
        return {};
    }
};
