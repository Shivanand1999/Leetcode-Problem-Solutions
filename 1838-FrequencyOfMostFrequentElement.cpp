class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int currBack = nums.size()-1;
        int maxFreq = 0;
        sort(nums.begin(), nums.end());
        for(int i = nums.size()-1; i >= 0; i--){
            if(i < nums.size()-1){
                k += (nums[i+1] - nums[i]) * (i - currBack);
            }
            while(currBack >= 0 && nums[i] - nums[currBack] <= k){
                k -= nums[i] - nums[currBack];
                currBack--;
            }
            maxFreq = max(maxFreq, i - currBack);
            if(currBack < 0)
                return maxFreq;
        }
        return maxFreq;
    }
};