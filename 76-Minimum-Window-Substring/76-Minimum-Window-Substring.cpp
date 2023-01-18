class Solution {
public:
    string minWindow(string s, string t) {
        int freq[128] = {0};
        for(char c : t) {
            freq[c]++;
        }
        int start = 0, end = 0, minstart = 0, minlen = INT_MAX, counter = t.length();
        while(end < s.length()) {
            char endS = s[end];
            if(freq[endS] > 0) {
                counter--;
            }
            freq[endS]--;
            end++;
            while(counter == 0) {
                if(minlen > end - start) {
                    minlen = end - start;
                    minstart = start;
                }
                char startS = s[start];
                freq[startS]++;
                if(freq[startS] > 0) {
                    counter++;
                }
                start++;
            }
        }
        return minlen == INT_MAX ? "" : s.substr(minstart, minlen);
    }
};
