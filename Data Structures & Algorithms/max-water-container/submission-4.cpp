class Solution {
public:
    int maxArea(vector<int>& heights) {
        int first = 0;
        int last = heights.size() - 1;
        int totalMaxWater = 0;

        while(first < last){

            if (totalMaxWater <= ((last - first) *min(heights[first], heights[last]))) 
                totalMaxWater = (last - first) *min(heights[first], heights[last]);

            if (heights[first] < heights[last])
                first++;   
            else 
                last--;
        }


        return totalMaxWater;
    }
};
