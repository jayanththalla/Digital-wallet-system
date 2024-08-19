#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

bool customSort(const pair<int,int>&a, const pair<int, int>&b) {
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        mp[x]=y;
    }
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(mp[a]>=c){
            mp[a]-=c;
            mp[b]+=c;
            cout<<"Success"<<"\n";
        }else{
            cout<<"Failure"<<"\n";
        }
    }
    cout<<"\n";
    vector<pair<int,int>>vec;
    for(auto it:mp){
        vec.push_back({it.first,it.second});
    }
    sort(vec.begin(), vec.end(),customSort);
    for (auto p:vec) {
        cout<<p.first<<" "<<p.second<<"\n";
    }
    
    return 0;
}
