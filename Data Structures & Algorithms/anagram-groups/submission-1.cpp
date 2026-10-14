class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        
        for(const auto& s:strs){
            string sortedS = s;
            sort(sortedS.begin(),sortedS.end());
            mpp[sortedS].push_back(s);
        }
        vector<vector<string>> ans;
        for(const auto& pair: mpp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
