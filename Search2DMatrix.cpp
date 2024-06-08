class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n=matrix.size();
      int m=matrix[0].size();

      int count=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==target){
                count=1;
                break;
            }
        }
      }
        if(count)return true;
        return false;
      }
}; 

//tc: o(n^2)
//sc: o(1)
