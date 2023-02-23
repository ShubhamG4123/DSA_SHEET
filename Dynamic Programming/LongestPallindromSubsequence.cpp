//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  
    int solve(string& A, string& revA,int i ,int j ,vector<vector<int>>& dp)
    {
        if(i==A.length())
        {
            return 0;
        }
        if(j== revA.length())
        {
            return 0;
        }

        int ans = 0;
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }

        if(A[i]==revA[j])
        {
        ans = 1 + solve(A,revA,i+1,j+1,dp);
        }
        else
        {
            ans = max(solve(A,revA,i+1,j,dp),solve(A,revA,i,j+1,dp));
        }

        return dp[i][j] = ans;

    }
    int longestPalinSubseq(string A) {
        //code here
        string revA = A;
        vector<vector<int>>dp(A.length(),vector<int>(A.length(),-1));
        reverse(revA.begin(),revA.end());

        return solve(A ,revA , 0,0,dp);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
