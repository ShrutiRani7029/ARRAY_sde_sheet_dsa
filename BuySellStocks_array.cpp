int maxProfit(vector<int>& p) {
     int k=p[0];
     int profit=0;
     //int m=INT_MIN;

     for(int i=1;i<p.size();i++){
        int c=p[i]-k;
        profit=max(profit,c);
        k=min(k,p[i]);

     }
     return profit;
}

//tc:- o(n)
//sc:- o(1)
