#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> a;
    for(int i = 0;i<n;i++){
        int t;
        cin>>t;
        a.push_back(t);
    }
    int maxl=0;
    int count = 1;
    for(int i=0;i<n-1;i++){
        if(!(a[i]>a[i+1])){
             count++;
        }
        else{
            if(count>maxl){
                maxl = count;
            }
            count = 1;
        }
    }
    cout<<max(maxl,count);
    return 0;
}
