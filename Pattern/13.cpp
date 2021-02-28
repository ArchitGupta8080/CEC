#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i,j;
    for(i=n;i>0;i--){
         for(j=0;j<n-i;j++)
	    {
	        cout<<" ";
	    }
        for (j = 0; j < 2*i - 1; j++) 
        {
            cout<<"*";
        }
       cout<<endl;
    }
    return 0;
}
