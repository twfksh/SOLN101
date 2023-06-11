/*
   Given an integer array nums, return true if any value appears at least twice in the array,
   and return false if every element is distinct.
   Input: nums = [1,2,3,1]
   Output: true
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> m;
        for (int x:nums) m[x]++;
        for (auto x:m) {
            if (x.second > 1) {
                return true;
            }
        }
        return false;
    }
};