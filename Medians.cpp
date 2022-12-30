class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        double m;
        vector<int> nums3;
        for(auto i=0;i<nums1.size();i++)
        {
           nums3.push_back(nums1.at(i));
        }
        for(auto i=0;i<nums2.size();i++)
        {
           nums3.push_back(nums2.at(i));
        }
        sort(nums3.begin(),nums3.end());
        // for(auto i=0;i<nums3.size();i++)
        // {
        //    cout<<nums3.at(i)<<"\n";
        // }
        if(nums3.size()%2!=0)
        {
            m=nums3.at((nums3.size()+1)/2-1);
        }
        else{
            int n1=nums3.at((nums3.size()/2)-1);
            cout<<"n1="<<n1<<"\n";
            int n2=nums3.at(nums3.size()/2);
            cout<<"n2="<<n2;
            m=(n1+n2)/2.0;

        }
        return m;

    }    


};
