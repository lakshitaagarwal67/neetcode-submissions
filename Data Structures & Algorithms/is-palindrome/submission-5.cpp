class Solution {
public:
    bool isPalindrome(string s) {
       int i =0, j=s.size()-1;

       while (i < j) {
            while (i < j && !isalnum(s[i])) i++;   // skip ALL non-alpha from left
            while (i < j && !isalnum(s[j])) j--;   // skip ALL non-alpha from right
            if (tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }

       return true;
    }
};
