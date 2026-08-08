class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> tLetters;
        unordered_map<char,int> sLetters;

        if (s.size() != t.size())
            return false;

        for (int i=0; i< s.size();i++){
                sLetters[s[i]]++;
        }

        for (int i=0; i< t.size();i++){
                tLetters[t[i]]++;
        }

        return sLetters == tLetters;
}
};