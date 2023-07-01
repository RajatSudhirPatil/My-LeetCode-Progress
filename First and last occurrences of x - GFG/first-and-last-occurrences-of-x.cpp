//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int a[], int n , int x )
{
    // code here
    int f=n-1;
    int l=0;
    int fl=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            l=i;
            fl=1;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==x){
             f=i;
             fl=1;
        }
    }
    if(fl==0) return {-1,-1};
    return {f,l};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends