#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution{
public:
    int solve(int n, int m){

        int cnt=0;
        if(n>=m){
            return n-m;
        }
        int limit = 2 * m + 1;
        vector<int>dist(limit,0);

        vector<bool>visited(limit,0);
        queue<int>q;
        q.push(n);
        visited[n]=1;
        while(!q.empty()){
            int x = q.front();
            q.pop();

            if (x == m) {
                return dist[x];
            }

            int next1 = x-1;
            int next2 = x * 2;

            if(next1>=0 && next1 < limit && !visited[next1]){
                dist[next1] = dist[x] + 1;
                q.push(next1);
                visited[next1]=1;
            }
            

            if(next2<limit && !visited[next2]){
                dist[next2] = dist[x] + 1;
                q.push(next2);
                visited[next2]=1;
            }
            
        }
        return dist[m];
    }
};

int main(){
    int n,m;
    cin>>n>>m;

    Solution s1;

    int ans = s1.solve(n,m);
    cout<<ans<<endl;
    
}