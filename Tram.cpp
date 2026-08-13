#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count=0;
    int maxi=0;

    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;

        
            count -= u;
            count += v;
            maxi = max(maxi,count);
        
    }
    cout<<maxi;
}