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

void quickSort(int arr[],int l,int h){
    int pivot;
    if(l<h){
        pivot = randomise(arr,l,h);
        quickSort(arr,l,pivot-1);
        quickSort(arr, pivot+1, h);
    }
}

int main()
{
    int arr[10];
    int k,i;
    cin>>k;
    for(i=0;i<k;i++)
        cin>>arr[i];
    quickSort(arr, 0, k - 1);
    printf("Sorted array: \n");
    for(i=0;i<k;i++)
        cout<<arr[i];
    return 0;
}