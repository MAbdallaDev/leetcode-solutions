class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int j = 0, temp = 1;
        vector<int> left(n,1);
        vector<int> right(n,1);
        for(int i= 1;i<n;i++)
        {
            left[i] = left[i-1]*nums[i-1];
        }
        for(int i= n- 2;i>=0;i--)
        {
            right[i] = right[i+1]*nums[i+1];
            left[i]*= right[i];
        }

        return left;
        
        
        
        
        
        
        
        
    }
};