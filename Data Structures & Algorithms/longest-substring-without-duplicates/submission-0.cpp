class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,bool>mp;
        int n=s.size();
        int l=0,r=0;
        int ans=0;
        while(r!=n)
        {
            if(mp.find(s[r])!=mp.end())
            {
                while(s[l]!=s[r])
                {
                    mp.erase(s[l]);
                    l++; 
                }
                mp.erase(s[l]);
                l++;
            }
            ans=max(ans,(r-l+1));
            mp[s[r]]=true;
            r++;
        }
        return ans;
    }
};
