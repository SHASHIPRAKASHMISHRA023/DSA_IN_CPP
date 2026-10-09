class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        int result = 0;
        int cnt = 0;
        int i = 0;
        while(i<n){
            if(s[i] == '('){
                cnt++;
                i++;
            }else{
                if(cnt>0){
                    cnt--;
                }else{
                    result++;
                }
                if(i+1<n && s[i+1] == ')'){
                    i+=2;
                }else{
                    result++;
                    i++;
                }
            }
        }
        return result + cnt*2;
    }
};