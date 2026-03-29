class Solution {
public:
    bool isAnagram(string s, string t) {
        bool res = true;
        if(s.length() != t.length())
            res = false;
        else{
            unordered_map<char, int> cS;
            unordered_map<char, int> cT;
            for(int  i = 0; i < s.length(); i++){
                cS[s[i]]++;
                cT[t[i]]++;
            }
            if(cS != cT)
                res = false;
        }
        return res;
    }
};
