class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> numbers;
      int complement = 0;

      for (int i=0; i < nums.size(); i++){
        numbers.insert({nums[i], i});

        complement = target - nums[i];

        if (numbers.count(complement) && numbers[complement] != i)
            return {numbers[complement],i};
      }

      return {};
    }
};
