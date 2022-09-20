class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size()-1;
        while(l < r) {
            if(ispunct(s[l]) || s[l] == ' '){ 
                l++;
                continue;
            } 
            else if(ispunct(s[r]) || s[r] == ' '){ 
                r--;
                continue;
            }
            else if(tolower(s[l]) != tolower(s[r])){ 
                return false;
            }
            else{ 
                l++;
                r--;
            }
        }
        return true;
    }
};