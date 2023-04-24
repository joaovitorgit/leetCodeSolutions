class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int size = strs.size();
        string firstElement = strs[0], lastElement = strs[size-1], ans = "";
        for(int i = 0; i<firstElement.length();i++){
            if(firstElement[i]== lastElement[i]){
                ans+=firstElement[i];
            }else{
                return ans;        
            }
        }
        return ans;
    }
};