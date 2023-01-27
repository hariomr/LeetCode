class Solution {
public:
    vector<int>adj[2001];
    int col[2001];

    bool iscyclic(int x){
        if(col[x]==2){
            return true;
        }
        if(col[x]==0){
            col[x]=2;
            for(auto &u:adj[x]){
                if(iscyclic(u))
                return true;
            }
        }
        col[x]=1;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        for(auto &x:prerequisites){
            adj[x[1]].push_back(x[0]);
        }
        for(int i=0;i<numCourses;i++){
            col[i]=0;
        }
        for(int i=0;i<numCourses;i++){
            if(col[i]==0){
                if(iscyclic(i))
                return false;
            }
        }
        return true;
    }
};
