#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int Binary_search(int* arr, int l, int h,int key,int occurrence){
    int mid,index=-1;
    while(h>=l){
        mid=(h+l)/2;
        if(arr[mid]==key){
            index=mid;
            if(occurrence)
                h= mid-1;
            else
                l= mid+1;
        }else if(arr[mid]>key)
            h=mid-1;
        else if(arr[mid]<key)
            l=mid+1;
    }
    return index;
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
        int key;
        cin>>key;
        int first_occur = Binary_search(arr,0,n-1,key,1);
        int last_occur = Binary_search(arr,0,n-1,key,0);
        if(first_occur!=-1)
            cout<<key<<"->"<<last_occur-first_occur+1<<endl;
        else
            cout<<"Key not present "<<key<<endl;
    }
    return 0;
}
