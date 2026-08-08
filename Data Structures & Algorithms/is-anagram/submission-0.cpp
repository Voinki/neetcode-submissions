class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> tLetters;
        unordered_map<char,int> sLetters;

        if (s.size() != t.size())
            return false;

        for (int i=0; i< s.size();i++){
            if (sLetters.contains(s[i]))
                sLetters[s[i]]++;
            else
                sLetters.insert({s[i], 1});
        }

        for (int i=0; i< t.size();i++){
            if (tLetters.contains(t[i]))
                tLetters[t[i]]++;
            else
                tLetters.insert({t[i], 1});
        }

        return sLetters == tLetters;
}
};