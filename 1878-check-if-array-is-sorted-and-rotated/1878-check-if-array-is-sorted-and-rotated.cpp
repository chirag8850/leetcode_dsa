class Solution {
public:
    bool check(vector<int>& arr) {
        int length = arr.size();
        int count = 0;
        for(int i=1;i<length;i++){
            if(arr[i-1]>arr[i])
                count++;
        }
        if(arr[length-1]>arr[0])
            count++;
        
        return count<=1;
    }
};