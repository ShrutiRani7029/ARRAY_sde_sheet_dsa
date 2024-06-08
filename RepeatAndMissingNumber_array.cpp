vector<int> Solution::repeatedNumber(const vector<int> &a) {
    long long n = a.size(); 
    long long sn = (n * (n + 1)) / 2;
    long long sn2 = (n * (n + 1) * (2 * n + 1)) / 6;
    
    long long s1 = 0, s2 = 0;
    
    for(int i = 0; i < n; i++){
        s1 += a[i];
        s2 += (long long)a[i] * (long long)a[i]; // square
    }
    
    long long diff = s1 - sn; // a - b
    long long diff2 = s2 - sn2; // a^2 - b^2
    
    // (a^2 - b^2) = (a - b)(a + b)
    // diff2 = diff * (a + b)
    long long sum = diff2 / diff; // a + b
    
    long long x = (diff + sum) / 2;
    long long y = x - diff;
    
    return {int(x), int(y)};
}

///Time Complexity: o(n)
///Space Complexity: o(1) //no extra memory
