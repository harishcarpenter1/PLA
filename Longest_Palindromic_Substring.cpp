// Leetcode - Longest Palindromic substring - https://leetcode.com/problems/longest-palindromic-substring/description/"

// c++ program to get the longest palindromic substring
// Approach - maintain a nxn table for checking whether a substring is palindrom or not.

class Solution {
public:
    string longestPalindrome(string s) {
      
        int n = s.size();
        vector<vector<int>>dp(n,vector<int>(n,1));

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n-i-1; j++){
                if(s[j] != s[j+i+1] || dp[j+1][j+i] != 1){
                    dp[j][j+i+1] = 0;
                }
            }
        }

        int mxs = 0, mxe = 0;

        for(int i = 0; i<n; i++){
            int start = i, end = i;
            for(int j = i+1; j<n; j++){
                if(dp[i][j] == 1){
                    end = j;
                }
            }

            if((end-start)+1 > (mxe-mxs)+1){
                mxs = start;
                mxe = end;
            }

        }
          

        string ans = "";

        for(int i= mxs; i<=mxe; i++){
            ans+=s[i];
        }
        
        return ans;

    }
};
