int removeDuplicates(vector<int>& nums) {
        
        int count=0;
        int i=1;

        while(i<nums.size()){
           if(nums[i] == nums[i-1]){count++;
           if(count>1){
            nums.erase(nums.begin()+i);
           }
           else i++;}
           else if(nums[i]!=nums[i-1]){
            count=0;
            i++;
           }
           
        }
        return nums.size();


    }
