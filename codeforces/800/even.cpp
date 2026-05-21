#include <iostream>
using namespace std;

int main(){

    long long n,k;
    cin>>n>>k;
    long long b = (n+1)/2;
    if(k<=b){
        cout<<2*k-1;
    }
    else{
        cout<<2*(k-b);
    }

    return 0;
}