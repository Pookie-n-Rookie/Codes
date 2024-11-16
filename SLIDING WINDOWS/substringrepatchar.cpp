<<<<<<< HEAD
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, 0);
        int st = 0, e = 0, maxlen = 0;
        
        while (e < s.size()) {
            if (hash[s[e]] > 0) {
                hash[s[st]]--;
                st++;
            } else {
                hash[s[e]]++;
                maxlen = max(maxlen, e - st + 1);
                e++;
            }
        }
        
        return maxlen;
    }
};
=======
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, 0);
        int st = 0, e = 0, maxlen = 0;
        
        while (e < s.size()) {
            if (hash[s[e]] > 0) {
                hash[s[st]]--;
                st++;
            } else {
                hash[s[e]]++;
                maxlen = max(maxlen, e - st + 1);
                e++;
            }
        }
        
        return maxlen;
    }
};
>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
