class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()) return false;
        
        unordered_map<int,int> mpp1;
        unordered_map<int,int> mpp2;

        for(int i =0;i<s.length();i++){
            mpp1[s[i]]++;
        }

        for(int i=0;i<t.length();i++){
            mpp2[t[i]]++;
        }

        if(mpp1==mpp2) return true;

        return false;
    }
};
