class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = *min_element(nums1.begin(),nums1.end());
        if(mn%2 == 1){
            return true;
        }
        for(int nums:nums1){
            if(nums%2 == 1){
                return false;
            }
        }
        return true;
    }
};