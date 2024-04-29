#include <bits/stdc++.h>
using namespace std;
void printArray(int* arr, int n){
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}
void SelectionSort(int* arr, int n){
    int comparisons=0,swaps=0;
    for(int i = 0; i < n-1; i++){
        swaps++;
        for(int j=i+1;j<n;j++){
            comparisons++;
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArray(arr,n);
    cout<<endl<<"Comparisons: "<<comparisons<<endl;
    cout<<"Swaps: "<<swaps<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        SelectionSort(arr,n);
    }
    return 0;
}
