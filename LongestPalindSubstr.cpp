class Solution {
public:
    int checkPalindrome(string c) //eturns 1 if it is a palindrome
    {
        //int k=c.length()-1;
        int ind=1;
        for(int i=0;i<c.length()/2;i++)
        { 
            if(c[i]!=c[c.length()-i-1])
            {
               ind=0;
            
            }
           // k--;
                       
        }
        return ind;
    }
    string longestPalindrome(string s) 
    { 
        string longest="";
        cout<<checkPalindrome("bb");
        for(int i=0;i<s.length();i++)
        {
            for(int j=2;j<s.length()-i+1-1;j++)
            {
                string c=s.substr(i,j);
                int k=checkPalindrome(c);
                if(k==1 && c.length()>longest.length())
                {
                    longest=c;
                }
            }
        }
        return longest;
        
    }
};
