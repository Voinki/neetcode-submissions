class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        unordered_set<char> sequence;
        int start = 0;
        int end = 0;
        int maxLength = 0;

        while (end < s.size()) {
            if (!sequence.contains(s[end])){
                sequence.insert(s[end]);
                if (sequence.size() > maxLength) maxLength = sequence.size();
                end++;
            } 
            else {
                sequence.erase(s[start]);
                start++;
            }
        }
        
        return maxLength;
    }
};