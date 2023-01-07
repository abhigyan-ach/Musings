class Solution {
public:
    int myAtoi(string s)
    {
        //string s="9454  is he";
        int ind=1;
        string k;
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        if(s[0]=='-')
        {
            ind=-1;
        }

        for(int i=0;i<s.length();i++)
        {
        
            if(isdigit(s[i]))
            {
                k.push_back(s[i]);
            }
            
        }

        return (stoi(k)*ind);
    }
};
