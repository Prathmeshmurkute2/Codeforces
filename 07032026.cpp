#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

void check(vector<int>&arr,int u){
    unordered_map<int,char>pat;
    for(int i=0;i<arr.size();i++){
        pat[arr[i]]=(i%2? 'R':'B');
    }
    
    bool found=true;

    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size()-1;i++){
        if(pat[arr[i]] == pat[arr[i+1]]){
            found=false;
            break;
        }
    }
    if(found){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int u;
        cin>>u;
        vector<int>arr(u);
        for(int i=0;i<u;i++){
            cin>>arr[i];
        }
        check(arr,u);
    }
}