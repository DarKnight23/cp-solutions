#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int r=0;
            int l=0;
            for(int j= i+1;j<n;j++){
                if(a[i]<a[j]) r++;
                if(a[i]>a[j]) l++;
            }
            cout<<max(r,l)<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
