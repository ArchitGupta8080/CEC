#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i,j,k,l;
     for(i = 0; i<n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(k=i; k>=1; k--)
        {
            cout<<k;
        }
        for(l=2; l<=i; l++)
        {
            cout<<l;
        }
        cout<<endl;
    }
    for(i=n-1; i>=1; i--)
    {
        for(j=0; j<=n-1-i; j++)
        {
            cout<<" ";
        }
        for(k=i; k>=1; k--)
        {
            cout<<k;
        }
        for(l=2; l<=i; l++)
        {
            cout<<l;
        }
       cout<<endl;
    }
    return 0;
}