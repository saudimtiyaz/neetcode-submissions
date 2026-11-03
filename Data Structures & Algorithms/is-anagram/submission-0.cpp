class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
        return false;
    }

        for (int i = 0; i < s.size(); i++){
            int j = 0;
            while (t.size() != 0 && j < t.size()) {
                if (s[i] == t[j]) {
                    t.erase(t.begin() + j);
                    break;
                }
                j++;
            }
        }
        
        if (t.size() == 0){
            return true;
        }
        else {
            return false;
        }
    }
};
