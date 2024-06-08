class Solution {
public:
///2,1,5,4,3,0
    void nextPermutation(vector<int>& nums) {
       
       int index=-1;
       int n=nums.size();

       ///1. find breaking point (longer prefix match) - a[i] <a[i+1] : index=i, break; -> smallest stay close
       for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
       }

       //if no breaking point->reverse
       if(index==-1){
        reverse(nums.begin(),nums.end());
        return;
       }

       //swap 
       for(int i=n-1;i>index;i--){
        if(nums[i]>nums[index]){
            swap(nums[i], nums[index]);
            break;
        }
       }

       
       
       //reverse the right half
       reverse(nums.begin() + index+1, nums.end());



   ///Time complexity: o(n)
   ///Space complexity: o(1)




    }
};
