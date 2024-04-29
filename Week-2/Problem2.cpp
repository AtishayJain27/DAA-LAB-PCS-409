#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
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
        int flag=0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j <n;j++){
                for(int k = j+1; k < n; k++){
                    if(arr[i] + arr[j] == arr[k]){
                        flag=1;
                        cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                        break;
                    }
                }
            }
        }
        if(!flag)
            cout<<"No sequence found!"<<endl;
    }
    return 0;
}
