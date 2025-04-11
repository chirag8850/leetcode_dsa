class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = INT_MIN;
        int current_max = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                current_max++;
                
                if(i==nums.size()-1){
                    maxi = max(current_max, maxi);
                }

            }else{
                maxi = max(current_max, maxi);
                current_max = 0;
            }
        }

        return maxi;
    }
};