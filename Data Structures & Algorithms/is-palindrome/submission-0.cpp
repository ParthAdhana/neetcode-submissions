class Solution {
public:
    bool isPalindrome(string text) {
        transform(text.begin(), text.end(), text.begin(),[](unsigned char c) { return tolower(c); });
        string x;
        for(auto c : text)
        {
            if( ('0' <=c && '9'>=c) || ('a'<=c && 'z'>=c))
            {
                x+=c;
            }
        }
        cout<<x<<endl;
        text=x;
        reverse(x.begin(),x.end());
        

        return text==x;

    }
};
