#include<iostream>

using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int digit=1;

    int total=0;

    while(w--){
        total += digit*k;
        digit++;

    }

     if (total > n)
        cout << total - n;
    else
        cout << 0;
}