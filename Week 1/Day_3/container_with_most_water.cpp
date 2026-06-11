class Solution {
public:
    int maxArea(vector<int>& height) {
        int marea=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            if(marea<min(height[left],height[right])*(right-left)){
                marea=min(height[left],height[right])*(right-left);
            }
            if(height[left]<height[right]) left++;
            else right--;
        }
        return marea;
    }
};