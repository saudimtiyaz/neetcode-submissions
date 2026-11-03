class Solution {
public:
    bool isAnagram(string s, string t) {
        // checking if the sizes are same
        if (s.size() != t.size()) {
            cout << "size is not equal, false";
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < s.size(); i++){
            if (s[i] == t[i]){
                continue;
            }
            return false;
        }
        return true;
    }
};
