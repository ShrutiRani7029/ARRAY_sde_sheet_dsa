class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
       int a=nums.size();
       int m=a/3;
       for(int i=0;i<nums.size();i++)
       mp[nums[i]]++;
       for(auto it:mp)
       {
         
          if(it.second>m)
          {
              v.push_back(it.first);
              
          }

       }
       return v;
    }
};

//tc: o(nlogn)
//sc: o(n)
