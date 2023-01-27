class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j= height.size()-1;
        int area = 0;
        while(i < j){
            area = max(area,min(height[i],height[j])*(j-i));
            (height[i] > height[j]) ? j-- : i++ ;
        }
        return area;
    }
};
