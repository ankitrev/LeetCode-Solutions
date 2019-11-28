class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        find_combination(candidates, temp, res, target, 0);
        return res;
    }
    void find_combination(vector<int>& candidates, vector<int>& temp, vector<vector<int>>& res, int target, int start){
        if(target < 0)
            return;
        else if(target == 0)
            res.push_back(temp);
        else{
            for(int i = start; i<candidates.size(); i++){
                temp.push_back(candidates[i]);
                find_combination(candidates,temp,res,target - candidates[i],i);
                temp.pop_back();
            }
        }
    }
};
