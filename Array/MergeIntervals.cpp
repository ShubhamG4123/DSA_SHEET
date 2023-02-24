class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>>ans;
        for(int i=0;i<n;++i)
        {
            if(ans.empty())
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                vector<int>&v = ans.back();
                int s = v[1];

                if(intervals[i][0] <=s)
                {
                    v[1] = max(s , intervals[i][1]);
                }
                else
                {
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};
