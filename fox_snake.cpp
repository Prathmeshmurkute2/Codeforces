#include<iostream>
using namespace std;

void solve(int n,int m){

    string full(m,'#');

    string right(m-1,'.');
    right += '#';

    string left = "#";
    left += string(m-1,'.');

    bool rightSide = true;

    for(int i=1;i<=n;i++){

        if(i%2==1){
            cout<<full<<endl;
        }
        else{

            if(rightSide)
                cout<<right<<endl;
            else
                cout<<left<<endl;

            rightSide = !rightSide;
        }
    }
}

int main(){

    int n,m;
    cin>>n>>m;

    solve(n,m);
}