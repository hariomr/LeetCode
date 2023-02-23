class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> strs;
        string cur_str = "";
        int cur_num = 0;
        
        for (char c : s) {
            if (isdigit(c)) {
                cur_num = cur_num * 10 + (c - '0');
            }
            else if (c == '[') {
                nums.push(cur_num);
                strs.push(cur_str);
                cur_num = 0;
                cur_str = "";
            }
            else if (c == ']') {
                int repeat_times = nums.top();
                nums.pop();
                string repeat_str = cur_str;
                for (int i = 1; i < repeat_times; i++) {
                    cur_str += repeat_str;
                }
                cur_str = strs.top() + cur_str;
                strs.pop();
            }
            else {
                cur_str += c;
            }
        }
        
        return cur_str;
    }
};
