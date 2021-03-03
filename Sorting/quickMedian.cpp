#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h){
    int pivot = arr[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if (arr[j] <= pivot) {
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}


int randomise(int arr[], int l, int h){
    int temp = l+ rand()% (h-l);
    swap(arr[temp],arr[h]);
    return partition(arr,l,h);
}

void median(int arr[], int l, int h, int mid, int &a, int &b){
    if(l<h){
        int pivot = randomise(arr,l,h);
        if(pivot==mid){
            b=arr[pivot];
        }
        else if(pivot == mid-1){
            a=arr[pivot];
        }
        if(pivot>=mid){
            return median(arr, l , pivot-1, mid, a, b);
        }
        else
           return median(arr, pivot+1,h, mid, a, b);
    }
}

int main()
{
    int arr[10];
    int n,i,a=-1,b=-1,med;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    if(n%2==1){
        median(arr,0,n-1,n/2,a,b);
        med = b;
    }    
    else{
        median(arr,0,n-1,n/2, a, b);
        med = (a+b)/2;
    }
    cout<<med;
    return 0;
}
