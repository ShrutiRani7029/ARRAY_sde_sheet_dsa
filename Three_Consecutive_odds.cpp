class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
       int n=arr.size();
    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count=0;
        }
        else if(arr[i]%2==1){
            count+=1;
        }

        if(count==3)break;

    }
   
   if(count==3)return true;
   else return false;

    }
};
