#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
        }
        vector <pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            v[i] = {b,i};
        }
        sort(v.rbegin(),v.rend());
        vector <int> ops;
        for(int i=0;i<n;i++){
            for(;v[i].first < k+1;v[i].first++){
                ops.push_back(v[i].second);
            }
        }
        cout<<ops.size()<<"\n";
        for(int i=0;i<ops.size();i++){
            cout<<ops[i]+1<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
