#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        pq.push(t);
    }
    for(int i=0;i<n;i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    return 0;
}
