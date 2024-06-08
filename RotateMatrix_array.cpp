class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
       /// 2 steps:
       //1)swap (i,j) -> (j,i)
       for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
        swap(matrix[i][j],matrix[j][i]);
        }
       }
       //2)reverse cols
       for(int i=0;i<n;i++){
       reverse(matrix[i].begin(), matrix[i].end());
        }         
    }
};

//tc:o(n^2)
//sc:o(1)
