#include<iostream>
#include<algorithm>
using namespace std;

void func(long long x,long long y){
    long long diff = x - 2*y;

    if(diff%3 !=0){
        cout<< "NO\n";
        return;
    }

    long long k = diff/3;

    if(k<0){
        cout<< "NO\n";
        return;
    }

    long long left = max(0LL, -y);
    long long right = k/2;

    if(left <= right) cout<<"YES\n";
    else cout << "NO\n";


}

int main(){
    int n;
    
    cin>>n;

    while(n--){
        long long x,y;
        cin>>x>>y;

        func(x,y);
    }
    return 0;
}