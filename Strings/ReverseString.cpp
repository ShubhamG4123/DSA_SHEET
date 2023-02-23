class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        int low = 0;
        int high = n-1;

        while(high >=low)
        {
            int temp = s[low];
            s[low] = s[high];
            s[high] = temp;

            low++;
            high--;
        }
    }
};
