class Solution {
public:
    bool isValid(string s) {
        stack<char> para;
        unordered_map<char, char> brac = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        for(char c : s){
            if(brac.count(c)){
                if(!para.empty() && para.top() == brac[c])
                    para.pop();
                else
                    return false;
            }else{
                para.push(c);
            }
        }
        return para.empty();
    }
};
