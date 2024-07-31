class Solution {
public:
    int maxArea(vector<int>& height) {
        long long ans = INT_MIN;
        int left = 0;
        int right = height.size() - 1;
        while(left<right){
            long long area = min(height[left], height[right]) * abs(right-left);
            ans = max(ans, area);
            if(height[left] > height[right]) right--;
            else left++;
        }
        return ans;
    }
};