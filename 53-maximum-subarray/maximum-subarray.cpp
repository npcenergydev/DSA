class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        int summax=nums[0];
        int sumincludingcurrent=nums[0];

        for(int i=1; i< nums.size(); ++i){
            int n= nums[i];
            sumincludingcurrent=max(sumincludingcurrent + n,n);
            summax=max(summax, sumincludingcurrent);
        }
        return summax;
    }
};