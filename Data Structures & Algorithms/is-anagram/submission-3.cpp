class Solution {
public:
    bool isAnagram(string s, string t) {
        //optimised
        if(s.size()!= t.size()) return false;

        int freq[26]={0};

        for(int ch: s){
            freq[ch-'a']++;
        }
        for(int ch: t){
            freq[ch-'a']--;
        }
        for(int cnt: freq){
            if(cnt!=0) return false;
        }
        return true;
    }
};
