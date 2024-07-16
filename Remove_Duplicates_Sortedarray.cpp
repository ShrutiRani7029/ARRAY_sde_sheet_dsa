 int removeDuplicates(vector<int>& v) {
       int i=1;
       while(i<v.size()){
        if(v[i]==v[i-1]){
            v.erase(v.begin()+i);
        }
        else i++;
       }
       return v.size();
    }
