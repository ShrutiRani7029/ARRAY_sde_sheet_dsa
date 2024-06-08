class Solution {
public:
    double myPow(double x, int n) {
        double p=1.0;
       long long num=n;
       if(num<0){ 
           x=1/x; 
           num=-num; 
       }

       while(num>0){
           if(num%2==1){ //3%2=1
               p*=x; //1.0*=(1/2.10000)

           }
           x=x*x; 
           num=num/2;
       }
       return p;
    }
};

//tc:o(logn)
//sc:o(1)
