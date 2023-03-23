// Given an array of values and a target value, return the indexes that add up to target
// Example: nums = [2,7,11,15], target = 9, output  = [0,1]

/*
Solution: Iterate the array. For each number it validates if there a key on the hash that is equal to 'target-number'. 
- Case yes: return current index and index of the found key(which is store as value of that key)
- Case not: add a new item with the key of 'target-number' and value = current index

Complexity:
- Time: O(n)
- Space: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       std::map<int, int> hash;
       vector<int> a;
       for(int i = 0;i < nums.size(); i++){
           int aux = target-nums[i];
           if(hash.find(aux)!= hash.end()){
               a.push_back(i);
               a.push_back(hash[aux]);
                return a;
           }
        hash.insert(std::make_pair(nums[i], i));
       }
       return a;
    }
};