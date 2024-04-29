#include <bits/stdc++.h>
using namespace std;
void merge(int* arr, int l, int mid, int h){
    int n1=mid-l+1,n2=h-mid;
    int L[n1],R[n2],i,j,k;
    for(i=0;i<n1;i++) L[i] = arr[l+i];
    for(j=0;j<n2;j++) R[j] = arr[mid+1+j];
    i=0;j=0;k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j])
            arr[k] = L[i++];
        else
            arr[k] = R[j++];
        k++;
    }
    while(i<n1){
        arr[k++] = L[i++];
    }
    while(j<n2){
        arr[k++] = R[j++];
    }
}

void Sort(int* arr, int l, int h){
    if(l<h){
        int mid = l + (h-l)/2;
        sort(arr,l,mid);
        sort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}

void BinarySearch(int* arr, int l, int h , int k){
    int flag=0;
    while(h>=l){
        if(arr[l]+arr[h] == k){
            cout<<arr[l]<<" "<<arr[h];
             if(l<=0 && h>0)
                cout<<", ";
            flag=1;
        }
        if((arr[l]+arr[h])<k)
                l++;
        else
            h--;
    }
    if(!flag)
        cout<<"\nNo Such Pair exist"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int k;
        cin>>k;
        Sort(arr,0,n-1);
        BinarySearch(arr,0,n-1,k);
    }
    return 0;
}
