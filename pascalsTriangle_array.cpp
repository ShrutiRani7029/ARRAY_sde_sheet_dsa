
    vector<vector<int>> generate(int n) {
      vector<vector<int>>pascal;
      
      if(n==0)return pascal;
      pascal.push_back({1});

      for(int i=1;i<n;i++){
        vector<int>row(i+1,1);
        for(int j=1;j<i;j++){
            row[j] = pascal[i-1][j-1] + pascal[i-1][j];

        }
        pascal.push_back(row);
      }
      return pascal;
    }



//Time complexity: o(n^2)
//Space complexity: o(n^2)
