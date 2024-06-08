class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
        vector<int>ans;
        //ans.size()=2;
 
    int n=v.size();
    int i=0,j=n-1; /// i=0, j=3
    while(i<n-1 ) ///i<3
    {
        if(j!=i) /// 3!=0
        {

        if(v[i]+v[j]==k) /// 2+15 =17
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        else j--; 
        }
        else
        {
            i++;
            j=n-1;
        }
    }
    return ans;
    }
};

///tc: o(n)
///sc: o(1)
