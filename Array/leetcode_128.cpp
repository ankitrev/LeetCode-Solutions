class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        int res = 0;
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            if(m.find(nums[i]) == m.end()){
                int l = m.count(n-1) == 1 ? m[n-1] : 0;
                int r = m.count(n+1) == 1 ? m[n+1] : 0;
                int len = l + r + 1;
                m[n] = len;
                res = max(res,len);
                m[n-l] = len;
                m[n+r] = len;
            }
            else
                continue;
        }
        return res;
    }
};