class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int num;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.second>1){
                num=it.first;
                break;
            }
        }
        return num;

    }
};

//tc:o(n)
//sc:o(n) :- The map mp can store up to n key-value pairs in the worst case (if all numbers are unique).
