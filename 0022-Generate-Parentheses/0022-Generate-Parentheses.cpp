class Solution {
public:
    vector<string>ans;

    void solve(int o,int c, string t, int n){
        if(t.size()==2*n){
            ans.push_back(t);
            return;
        }
        if(o<n){
            solve(o+1,c,t+'(',n);
        }
        if(c<o){
            solve(o,c+1,t+')',n);
        }
    }
    vector<string> generateParenthesis(int n) {
        string t;
        solve(0,0,t,n);
        return ans;
    }
