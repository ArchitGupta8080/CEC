#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i,j;
    for(i=n;i>0;i--){
       for(j=0;j<i;j++){
           cout<<"*";
       }
       cout<<endl;
    }
    return 0;
}