#include <iostream>
#include <vector>
using namespace std;
int arrray(vector<int> arr,int n)
{
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
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
        if(res)
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
