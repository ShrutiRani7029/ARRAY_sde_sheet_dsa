class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();
       if(n==0)return 0;
       int m=0;
       map<int,int>mp;


       for(int i=0;i<n;i++)mp[nums[i]]++;

       vector<int>ans;
       for(auto it:mp){
        ans.push_back(it.first); ///sorting
       }

       int count=0;
       for(int i=0;i<ans.size()-1;i++){
        if(abs(ans[i]-ans[i+1])==1)count++;
        else count=0;
        m=max(m,count);
       }
       return m+1;

    }
};

//tc:o(n)
//sc:o(n)
