class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string result = "";
        for(char c:s){
            if(c == '('){
                if(cnt != 0)result.push_back(c);
                cnt++;
            }else{
                cnt--;
                if(cnt != 0)result.push_back(c);
            }
        }
        return result;
    }
};