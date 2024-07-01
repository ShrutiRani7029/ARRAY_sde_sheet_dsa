class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        double result=INT_MAX;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n/2;i++){
            int mini = nums[i];

            int maxi= nums[n-i-1];
            result = min(double(result), double(maxi+mini)/2);
        }
        return result;
    }
};
