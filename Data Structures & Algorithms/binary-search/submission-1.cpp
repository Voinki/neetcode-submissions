class Solution {
public:
    int binarySearch(int l, int r, vector<int>& nums, int target){
        if (l > r) return -1;

        int mid = (l + r) / 2;
        if (nums[mid] == target) return mid;

        return ((nums[mid] < target) 
        ? binarySearch(mid+1, r, nums, target) 
        : binarySearch(l, r -1, nums, target)); 
    }

    int search(vector<int>& nums, int target) {
        return binarySearch(0, nums.size() -1, nums, target);
    }
};
