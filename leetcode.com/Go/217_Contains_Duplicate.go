/*
   Given an integer array nums, return true if any value appears at least twice in the array,
   and return false if every element is distinct.
   Input: nums = [1,2,3,1]
   Output: true
*/

func containsDuplicate(nums []int) bool {
	m := make(map[int]int)
	for _, num := range nums {
		m[num]++
	}
	for _, val := range m {
		if val > 1 {
			return true
		}
	}
	return false
}