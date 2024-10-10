// 1512. Number of Good Pairs
class Solution {

    public int numIdenticalPairs(int[] nums) {
        int N = 0, res = 0;
        for (int x : nums) N = x > N ? x : N;
        int[] count = new int[N + 1];
        for (int num : nums) count[num]++;
        for (int n : count) res += (n * (int) 1.0 * (n - 1)) / 2;
        return res;
    }
}
