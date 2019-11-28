class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
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
                if(i > start){
                    if(candidates[i-1] == candidates[i])
                        continue;
                }
                temp.push_back(candidates[i]);
                find_combination(candidates,temp,res,target - candidates[i],i+1);
                temp.pop_back();
                
            }
        }
    }
};
