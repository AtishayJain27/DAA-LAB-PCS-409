#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int n,i,j;
    cin>>n;
    int arr1[n];
    for(i=0; i<n; i++)
        cin>>arr1[i];
    int m;
    cin>>m;
    int arr2[m];
    for(j=0;j<m;j++)    
        cin>>arr2[j];
    i=0;j=0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j])
            {cout<<arr1[i++]<<" ";}
        else if(arr1[i]<arr2[j])
            i++;
        else
            j++;
    }
    return 0;
}
