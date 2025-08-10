class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxi = -1;
        while(left<right){
            int mini = min(height[left], height[right]);
            int base = right - left;
            int area =  mini * base;
            maxi = max(area, maxi);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }

        return maxi;
    }
};