class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = *min_element(nums1.begin(),nums1.end());
        if(mn%2 == 1){//odd-then we can convert all even to odd
            return true;//all nums2 will be odd
        }
        //check if we can make all even in nums2
        for(int nums:nums1){
            if(nums%2 == 1){
                return false;
            }
        }
        return true;
    }
};