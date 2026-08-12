class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> vistos;
        for (int i : nums){
            if (vistos.count(i)){
                return true;
            }
            vistos.insert(i);
        }
        return false;
    }
};