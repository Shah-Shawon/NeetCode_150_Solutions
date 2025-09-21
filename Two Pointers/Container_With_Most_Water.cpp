class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i=0, j = n-1;

        int sum = 0,mx=0;

        while(i<j){
            int mn = min(heights[i],heights[j]);
            int mul = mn*(j-i);
            mx = max(mx,mul);
            if(heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return mx;
    }
};
