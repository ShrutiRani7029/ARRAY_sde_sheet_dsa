class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int>mp;
       int a=nums.size();
       int m=a/2;
       for(int i=0;i<nums.size();i++)
       mp[nums[i]]++;
       int n=0;
       for(auto it:mp)
       {
         
          if(it.second>m)
          {
              n=it.first;
          }

       }
       return n;
    }
};

//tc: o(nlogn)
//sc: o(n)
