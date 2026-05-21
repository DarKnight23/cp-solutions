#include <iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=n;j<2*n;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}