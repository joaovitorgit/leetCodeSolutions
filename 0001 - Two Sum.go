func twoSum(nums []int, target int) []int {
  hash := make(map[int]int)

  for i, num := range nums {
    complement := target - num
    if _, ok := hash[complement]; ok {
      return []int{i, hash[complement]}
    }
    hash[num] = i
  }
  return []int{}
}
