#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        int arr[n],k;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        nth_element(arr,arr+(k-1),arr+n);
        cout<<arr[k-1]<<" ";
        nth_element(arr,arr+(n-k),arr+n);
        cout<<arr[n-k]<<" ";
    }
   return 0;
}