#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    vector<string> v;
    int n = s.size();
    for(int i=0;i<n;i++){
        if((i+2<n) &&(s[i]=='W')&&(s[i+1]=='U')&&(s[i+2]=='B')){
            i += 2;
        }
        else{
            string w = "";
            for(;(i<n)&& !((i+2<n)&&(s[i]=='W')&&(s[i+1]=='U')&&(s[i+2]=='B'));i++){
                w += s[i];
            }
            i--;
            if(!w.empty()) v.push_back(w);
        }
    }

    for(int i=0;i<v.size();i++){
        if(i) cout<<" ";
        cout<<v[i];
    }
    
    return 0;
}
