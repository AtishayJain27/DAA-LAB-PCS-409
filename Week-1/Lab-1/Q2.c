#include <iostream>
#include <vector>
using namespace std;
int arrray(vector<int> arr,int n)
{
    int key;
    cin>>key;
    int left=0;
    int right =n-1;
    while(left<right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==key)
        {
            return mid+1;
        }
        else if(arr[mid]>key)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int res=arrray(arr,n);
        if(res>0)
        {
            cout<<"Present "<<res<<endl;
        }
        else
        {
            cout<<"Not Present"<<endl;
        }
        
    }
    return 0;
}
