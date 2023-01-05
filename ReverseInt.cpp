


class Solution {
public:
    int reverse(int x) 
    {
        int c=0;
        int ind;
        int rev_x=0;
        if(x>0)
          ind=1;
        else
          ind=-1;   
        x=abs(x);
        int i=x;
        while(i/10!=0 || i%10!=0)
        {
            i=i/10;
            c++;
        }
        
        while(x%10!=0 || x/10!=0)
        {
            rev_x=rev_x+(x%10)*pow(10,c-1);
            cout<<rev_x<<"\n";
            x=x/10;
            c--;
        }
        return ind*rev_x;


        
    }
};
