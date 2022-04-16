#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,flag;
    cin>>t;
    vector<int>arr;
    for(int k=0;k<t;k++)
    {
        flag=1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                cout<<"YES\n";
                flag=0;
                break;
            }
        }
        if(flag!=0)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}