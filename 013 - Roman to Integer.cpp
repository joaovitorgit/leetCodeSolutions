// Given an string that represent a roman numeral, convert it and return as a integer

/*
Solution: Use a hash where the Key is the Roman symbol and the value is its integer value. Iterate through the given string and add add up the respective value of each element.

Complexity:
- Time: O(n)
- Space: O(n)
*/

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> hash;
        hash['I'] = 1;
        hash['V'] = 5;
        hash['X'] = 10;
        hash['L'] = 50;
        hash['C'] = 100;
        hash['D'] = 500;
        hash['M'] = 1000;

        int result = 0; 

        for(int i = 0; i < s.length();i++){
            if(hash[s[i]] < hash[s[i+1]]){
                result -= hash[s[i]];
            }else{
                result += hash[s[i]];
            }
        }

        return result;
    }
};