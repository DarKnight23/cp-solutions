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
        long long a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                long long temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }
        cout<<(*max_element(a,a+n)) + accumulate(b,b+n,0LL)<<"\n";
    }
    
    return 0;
}