int maxLen(vector<int>&v, int n)
    {   
        // Your code here
        unordered_map<int,int>mp; //deal with subarray so no need of use map
        int sum=0;
        int ans=0;
        
        for(int i=0;i<n;i++){
            sum+=v[i];
            if(sum==0){
                ans=max(ans, i+1);
            }
             else if(mp.find(sum) == mp.end())
                mp[sum] = i;
            else
                ans = max(ans,i-mp[sum]);
        }
        return ans;
    }

///tc: o(n)
///sc: o(n)
