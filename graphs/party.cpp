#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Party{
    public:
        int ans=0;

        void dfs(int root,int depth, vector<vector<int>>& adj){
            ans = max(ans,depth);

            for(auto child:adj[root]){
                dfs(child,depth+1,adj);
            }
        }
};

int main(){
    int n;

    cin>>n;
    vector<int>manager(n);
    for(int i=0;i<n;i++){
        cin>>manager[i];
    }

    vector<vector<int>>adj(n);
    for(int i=0;i<n;i++){
        if(manager[i]==-1){

        }
        else{
            adj[manager[i]-1].push_back(i);
        }
    }

    Party p1;
    for(int i=0;i<n;i++){
        if(manager[i]==-1){
            p1.dfs(i,1,adj);
        }
        
    }

    cout<<p1.ans;
}