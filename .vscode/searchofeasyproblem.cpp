#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int hard=0;

    while(t--){
        int u;
        cin>>u;
        if(u==1){
            hard=1;
        }
    }

    if(hard==1){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
}