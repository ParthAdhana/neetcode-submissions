class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0,r=n-1;
        int sm=0;
        while(l<r)
        {
            sm=numbers[l]+numbers[r];
            if(sm==target)
            {
                vector<int>ans{l+1,r+1};
                return ans;
            }
            if(sm>target)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        vector<int>ans;
        return ans;
    }
};
