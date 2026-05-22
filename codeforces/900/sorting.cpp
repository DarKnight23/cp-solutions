#include <iostream>

using namespace std;

int findmax(int arr[],int n){
   int max=0;
   for(int i=1;i<n;i++){
       if((arr[i]<arr[i-1])){
        if((arr[i-1] - arr[i])>max){
            max = arr[i-1] - arr[i];
        }
       }
   }
   return max;
}

void addmax(int arr[], int n,int k){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            arr[i] += k;
        }
    }
}

int checkmax(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max = findmax(arr,n);
        addmax(arr,n,max);
        int b = checkmax(arr,n);
        (b)?cout<<"YES"<<"\n":cout<<"NO"<<"\n";
    }

    return 0;
}