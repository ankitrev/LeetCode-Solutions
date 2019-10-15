class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        if(num == 0)
            return {0};
        res.push_back(0);
        res.push_back(1);
        for(int i=2;i<=num;i++)
        {
            int temp = i & i-1;
            if(temp == 0)
                res.push_back(1);
            else
                res.push_back(res[temp] + 1);
        }
        return res;
    }
};
