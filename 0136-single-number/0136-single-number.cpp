class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        int n= (int)nums.size();
        int a=0;
        for(int i=0; i<n; i++){
        a ^=nums[i];
    }
    return a;
}
};