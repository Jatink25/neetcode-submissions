class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mpp;
        if(t.size()!=s.size()) return false; 
        for(char ch:s){
            mpp[ch]++;
        }
        for(char ch:t){
            if(mpp.find(ch)==mpp.end()||mpp[ch]==0){
                return false;
            }
            mpp[ch]--;
        }
        return true;
    }
};
