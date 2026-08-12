#include<iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;



int main(){
    int t;
    cin>>t;

    int result = 0;

    unordered_map<string,int>mp;

    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;

    while(t--){
        string s;
        cin >> s;

        result += mp[s];
    }
    cout<<result;
}