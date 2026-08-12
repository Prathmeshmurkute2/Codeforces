#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 int main(){
    int q;
    cin>>q;

    while(q--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        string t;
        cin>>t;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
 }