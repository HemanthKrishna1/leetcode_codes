class Solution {
public:
    int maxArea(vector<int>& height) {
        int area,max_area = INT_MIN;
        int left =0, right = height.size()-1;

        while(left<right) {
            area = min(height[left],height[right]) * (abs(left-right));
            max_area = max(area,max_area);
            if(height[left] > height[right]) right--;
            else left++;
        }
        return max_area;
    }
};