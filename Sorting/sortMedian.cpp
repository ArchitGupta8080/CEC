#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10],n,i;
    int median;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2==1){
        median = a[n/2+1];
    }
    else{
        median = (a[n/2]+a[n+1/2])/2;
   
    }
    cout<< median;
}
