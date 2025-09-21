class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto x:nums){
            st.insert(x);
        }
        if(nums.size()==st.size()){
            return false;
        }else {
            return true;
        }
    }
};
