class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int n = s.length();

        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;

        for(int i=0;i<n;i++){
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }

        return mpp1==mpp2?true:false;

        
    }
};
