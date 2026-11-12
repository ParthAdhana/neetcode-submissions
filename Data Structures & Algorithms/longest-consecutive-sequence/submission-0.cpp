class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0)return 0;
        int ans=1;
        int curr=nums[0];        
        int temp=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==curr)continue;
            if(nums[i]==curr+1)
            {
                temp++;
            }
            else
            {
                ans=max(ans,temp);
                temp=1;
                
            }
            curr=nums[i];
        }
        ans=max(ans,temp);
        return ans;
    }
};
