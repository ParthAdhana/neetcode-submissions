class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,bool>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=true;
        }
        int ans=0;
        int it=-1e9-3;
        int curr=1;
        if(n==0)return 0;
        for(auto i : mp)
        {
            if(it+1==i.first)
            {
                curr++;
            }
            else
            {
                curr=1;
            }
            it=i.first;
            ans=max(ans,curr);
        }
        return ans;
    }
};
