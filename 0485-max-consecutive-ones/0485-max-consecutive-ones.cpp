class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = INT_MIN;
        int current_max = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                current_max++;
            }else{
                current_max = 0;
            }
            maxi = max(current_max, maxi);
        }

        return maxi;
    }
};