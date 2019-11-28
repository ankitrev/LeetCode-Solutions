class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.size() == 0)
            return res;
        vector<vector<char>> mapping(2,vector<char>());
        string temp;
        mapping.push_back({'a','b','c'});
        mapping.push_back({'d','e','f'});
        mapping.push_back({'g','h','i'});
        mapping.push_back({'j','k','l'});
        mapping.push_back({'m','n','o'});
        mapping.push_back({'p','q','r','s'});
        mapping.push_back({'t','u','v'});
        mapping.push_back({'w','x','y','z'});
        find_letter_combination(digits,res,mapping,temp,0);
        return res;
    }
    void find_letter_combination(string digits, vector<string>& res, vector<vector<char>>& mapping, string temp, int index){
        if(index == digits.size())
            res.push_back(temp);
        else{
            for(int i = 0; i<mapping[digits[index] - '0'].size(); i++){
                temp.push_back(mapping[digits[index] - '0'][i]);
                find_letter_combination(digits,res,mapping,temp,index+1);
                temp.pop_back();
            }
        }
    }
};
