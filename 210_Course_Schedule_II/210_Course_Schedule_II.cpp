class Solution {
public:
    vector<int> adj[2001];
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        queue<int>q; 
        vector<int>indegree(n,0);
        int count =0;

        for(auto v:prerequisites){
            adj[v[1]].push_back(v[0]);
            indegree[v[0]]++;
        }

        vector<int>ans;
        vector<bool>visited(n,false);
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
                ans.push_back(i);
                visited[i]=true;
                count++;
            }
        }

        while(!q.empty()){
            int node=q.front();
            q.pop();

            vector<int> neighbours = adj[node];

            for(auto neighbour:neighbours){
                if(!visited[neighbour]){
                    indegree[neighbour]--;
                    if(indegree[neighbour] == 0){
                        q.push(neighbour);
                        ans.push_back(neighbour);
                        visited[neighbour]=true;
                        count++;
                    }
                }
            }
        }
        if(count!=n) return{};
        return ans;
    }
};
