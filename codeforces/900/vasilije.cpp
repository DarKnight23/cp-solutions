#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long a = k*(k+1)/2;
        long long b = (n*(n+1)/2)-((n-k)*(n-k+1)/2);
        ((x<=b)&&(x>=a))?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
    
    return 0;
}
