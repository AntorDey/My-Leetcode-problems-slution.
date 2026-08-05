class Solution {
public:
    int removeDuplicates(vector<int>& v) {
       int n = v.size(), k = 1;
       for(int i=0; i<n; i++){
        if(v[k-1] != v[i]){
            v[k]=v[i];
            k++;
        }
    }  
    return k;
    }
};    