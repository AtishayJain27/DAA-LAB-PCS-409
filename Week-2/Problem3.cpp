include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        file>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        int k,count=0;
        cin>>k;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(arr[i]-arr[j]) == k)
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
