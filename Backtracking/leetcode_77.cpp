class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int> temp;
        find_combination(res,temp,n,k,1);
        return res;
    }
    void find_combination(vector<vector<int>>& res, vector<int>& temp, int n, int k, int start){
        if(temp.size() == k)
            res.push_back(temp);
        else{
            for(int i=start; i<=n; i++){
                temp.push_back(i);
                find_combination(res,temp,n,k,i+1);
                temp.pop_back();
            }
        }
    }
};
