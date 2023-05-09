//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/
#include<bits/stdc++.h>
class Solution {
public:
    bool ispali(int a){
        vector<int> v;
        while(a){
            v.push_back(a%10);
            a=a/10;
        }
        int i=0,j=v.size()-1;
        while(i<j){
            if(v[i++]!=v[j--]) return false;
        }
        return true;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++){
    	    if(!ispali(a[i])) return 0;
    	}
    	return true;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends