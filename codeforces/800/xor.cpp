#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    cin>>a;
    cin>>b;
    for(int i=0;i< a.size();i++){
        cout<<(char)('0' + (a[i] != b[i]));
    }
    cout<<endl;

    
    return 0;
}
