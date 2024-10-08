// 1470. Shuffle the Array
class Solution {

    public int[] shuffle(int[] nums, int n) {
        int[] res = new int[2 * n];
        for (int i = 0; i < n; ++i) {
            res[i * 2] = nums[i];
            res[i * 2 + 1] = nums[n + i];
        }
        return res;
    }
}
