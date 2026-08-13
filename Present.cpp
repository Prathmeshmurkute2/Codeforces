#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    vector<int>arr(t+1);

    for(int i=1;i<t+1;i++){
        int c;
        cin >> c ;

        arr[c]=i;
    }

    for(int i=1;i<t+1;i++){
        cout<< arr[i]<<" ";
    }
}