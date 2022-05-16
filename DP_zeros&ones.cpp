class Solution {
public:
    int dp[606][106][106];
    int countzero(string s){
        int ct = 0;
        for (int i = 0; i<s.size(); i++){
            if(s[i]==0) ct++;
        }
        return ct;
    }
    
    int countone(string s){
        int ct = 0;
        for (int i = 0; i<s.size(); i++){
            if(s[i]==1) ct++;
        }
        return ct;
    }
    
    int lsub(vector <string> &strs, int i, int m, int n){
        if (m+n==0) return 0;
        if (i==strs.size()) return 0;
        if (dp[i][m][n]!=-1) return dp[i][m][n];
        int accept = 0;
        //accept string
        if (m>=countzero(strs[i]) && n>=countone(strs[i]))
            accept = 1+lsub(strs,i+1,m-countzero(strs[i]),n-countone(strs[i]));
        //reject string
        int reject = lsub(strs,i+1,m,n);
        return dp[i][m][n] = max(accept, reject);      
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp, -1, sizeof(dp));
        int i = 0;
        return lsub(strs,0,m,n);
    }
};
