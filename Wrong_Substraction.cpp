#include<iostream>
using namespace std;


int main(){
    int n;
    int k;

    cin>>n;
    cin>>k;

    while(k--){
        if(n%10==0){
            n=n/10;
        }
        else{
            n--;
        }
    }
    cout<<n;
}