// Given an integer NUMBER, return true if its palidrome and false otherwise

/*
Solution: two pointers START and END. START starting from the element and incrementing, END starting from the last element and decremeneting. 
If NUMBER[START] != NUMBER[END] return false, otherwise its true

Complexity:
- Time: O(n)
*/

var isPalindrome = function(x) {
    const NUMBER = String(x);
    let start = 0;
    let end = NUMBER.length-1;
    while (start < end){
        if(NUMBER[start]!== NUMBER[end] )return false
        start++;
        end--;
    }
    return true

};