class Solution {  
public:  
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mapv;
        for (int i = 0; i < n; i++){
            int number = nums[i];
            if (mapv.find(number) != mapv.end() && i-mapv[number] <= k){
                return true;
            }else{
                mapv[number] = i;
            }
        }
        return false;
    }
};  