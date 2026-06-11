class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int right=nums.size()-1;
        int left=0;
        int pos=right;
        while(left<=right){
            if(abs(nums[left]) > abs(nums[right])){
                res[pos] = nums[left] * nums[left];
                left++;
            }
            else {
                res[pos] = nums[right] * nums[right];
                right--;
            }
            pos--;
        }
        return res;
    }
};