#include <iostream>
#include <vector>
using namespace std;
void Jump_search(vector<int> arr, int n, int key){
    int comparison=0,flag=0;
    if(arr[0] == key){
        comparison=1;
        cout<<"Present "<<comparison<<endl;
        exit(0);
    }
    int range=1;
    while(range<n && arr[range]<=key){
        comparison++;
        range *= 2;
    }
    int l=range/2,h=min(range,n-1),mid;
    while(h>=l){
        comparison++;
        mid=(h+l)/2;
        if(arr[mid]==key){
            flag=1;break;
        }else if(arr[mid]>key)
            h=mid-1;
        else if(arr[mid]<key)
            l=mid+1;
    }
    if(flag)
        cout<<"Present "<<comparison<<endl;
    else
        cout<<"Not Present "<<comparison<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;
        Jump_search(arr,n,key);
    }
    return 0;
}
